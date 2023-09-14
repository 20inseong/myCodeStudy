body = document.body;
const clockTitle = document.querySelector(".js-clock");

const numberOfDate = (date2) => {
  const d1 = new Date();
  const d2 = new Date(date2);
  const mil = d2.getTime() - d1.getTime();

  // 시간에 관해서는 조금 더 익숙해지고 생각 많이 해보기
  const day = Math.floor(mil / (1000 * 60 * 60 * 24));
  const hour = Math.floor(mil / (1000 * 60 * 60));
  const min = Math.floor(mil / (1000 * 60));
  const second = Math.floor(mil / 1000);

  const d = day;
  const h = hour - day * 24;
  const m = min - hour * 60;
  const s = second - min * 60;

  // 여기서 innerHTML을 써준 이유는 
  // innerHTML은 innerText와 달리 "" , '' 안에 있는 HTML 요소도 읽을 수 있기 때문이다.
  clockTitle.innerHTML = 
  '<div>' + String(d).padStart(2, "0") + '<span>Days</span></div>'+
  '<div>' + String(h).padStart(2, "0") + '<span>Hours</span></div>'+
  '<div>' + String(m).padStart(2, "0") + '<span>Minutes</span></div>'+
  '<div>' + String(s).padStart(2, "0") + '<span>Seconds</span></div>';
};

function howMuch() {
  numberOfDate("2024-04-15 00:00:00");
}

setInterval(howMuch, 1000);