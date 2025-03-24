const pedal_1 = document.getElementById("pedal_1");
const pedal_2 = document.getElementById("pedal_2");
const pedal_3 = document.getElementById("pedal_3");
const pedal_4 = document.getElementById("pedal_4");
const pedal_img = document.getElementById("pedal_img");

pedal_1.addEventListener("mouseover", () => changeImage("pedal_1.svg"));
pedal_2.addEventListener("mouseover", () => changeImage("pedal_2.svg"));
pedal_3.addEventListener("mouseover", () => changeImage("pedal_3.svg"));
pedal_4.addEventListener("mouseover", () => changeImage("pedal_4.svg"));

pedal_1.addEventListener("mouseout", () => changeImage("pedal.svg"));
pedal_2.addEventListener("mouseout", () => changeImage("pedal.svg"));
pedal_3.addEventListener("mouseout", () => changeImage("pedal.svg"));
pedal_4.addEventListener("mouseout", () => changeImage("pedal.svg"));

let isModalOpen = false;

function changeImage(newSrc) {
  if (!isModalOpen) {
    pedal_img.src = newSrc;
  }
}

pedal_1.addEventListener("click", () => {
  openModal(0);
  changeImage("pedal_1.svg");
});

pedal_2.addEventListener("click", () => {
  openModal(1);
  changeImage("pedal_2.svg");
});

pedal_3.addEventListener("click", () => {
  openModal(2);
  changeImage("pedal_3.svg");
});

pedal_4.addEventListener("click", () => {
  openModal(3);
  changeImage("pedal_4.svg");
});
