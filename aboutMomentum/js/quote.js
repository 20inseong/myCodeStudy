const quotes = [
    {
        quote : "Don't dwell on the past.",
        trans : "과거에 연연하지 마세요."
    },
    {
        quote : "Believe in yourself.",
        trans : "자기 자신을 믿으세요."
    },
    {
        quote:"Follow your heart.",
        trans : "마음에 원하는 대로 따르세요."
    },
    {
        quote:"Seize the day.",
        trans:"오늘을 즐기세요."
    },
    {
        quote:"You only live once.",
        trans:"인생은 한 번 뿐이에요."
    },
    {
        quote:"Love yourself.",
        trans:"자기 자신을 사랑하세요."
    },
    {
        quote:"Past is just past.",
        trans:"과거는 과거입니다."
    },
    {
        quote:"Where there is a will there is a way.",
        trans:"뜻이 있는 곳엔 길이 있다."
    },
    {
        quote:"Don't beat yourself up.",
        trans:"자책하지 마세요."
    },
    {
        quote:"Life is a journey.",
        trans:"인생은 여정이다."
    },
]

const quote = document.querySelector("#quote span:first-child");
const trans = document.querySelector("#quote span:last-child");

const todaysQuote = quotes[Math.floor(Math.random()*quotes.length)]; //parseInt(Math.random()*10);

quote.classList.add("writeColor");
trans.classList.add("writeColor");

quote.innerText = todaysQuote.quote;
trans.innerText = todaysQuote.trans;