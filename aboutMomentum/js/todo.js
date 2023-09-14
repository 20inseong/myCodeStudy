const toDoForm = document.querySelector("#todo-form");
const toDoInput = document.querySelector("#todo-form input");
const toDoList = document.querySelector("#todo-list");

let toDos = [];
const TODOS = "todos";

function saveToDos(){
    localStorage.setItem(TODOS,JSON.stringify(toDos));
}

function deleteToDo(event){
    const li = event.target.parentElement;
    li.remove(); 
    toDos = toDos.filter((toDo) => toDo.id !== parseInt(li.id));
    saveToDos();
}

function paintToDo(newTodo){
    const listTodo = document.createElement("li");
    listTodo.id = newTodo.id;
    const span = document.createElement("span");
    span.innerText = newTodo.text;
    const button = document.createElement("button");
    button.id = 'btn';
    button.innerText = "❌";
    button.addEventListener("click",deleteToDo);
    listTodo.appendChild(span);
    listTodo.appendChild(button);
    toDoList.appendChild(listTodo);
}

function handleToDoSubmit(event) {
    event.preventDefault();
    const newToDo = toDoInput.value;
    toDoInput.value = "";
    const newToDoObj = {
        text: newToDo,
        id: Date.now()
    }
    toDos.push(newToDoObj);
    paintToDo(newToDoObj);
    saveToDos();
}

toDoForm.addEventListener("submit",handleToDoSubmit);

const savedToDos = localStorage.getItem(TODOS);
if(savedToDos !== null){
    const parsedToDos = JSON.parse(savedToDos);
    toDos = parsedToDos;
    // console.log(parsedToDos);
    // parsedToDos.forEach(item => { console.log(item)
    // }); 이런 형태도 있음을 알아두기
    parsedToDos.forEach(paintToDo); //parsedToDos에서 item을 내어주기 때문!
}