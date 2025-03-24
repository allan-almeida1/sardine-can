const modals = document.querySelectorAll(".modal");

function openModal(id) {
  console.log("Opening modal");
  isModalOpen = true;
  modals[id].style.visibility = "visible";
  modals[id].style.opacity = 1;
  const selectedOptionInput = document.querySelector(".function-select");
  selectedOptionInput.value = selectedOptions[id];
}

function closeModal(id) {
  console.log("Closing modal");
  isModalOpen = false;
  modals[id].style.opacity = 0;
  changeImage("pedal.svg");
  setTimeout(() => {
    modals[id].style.visibility = "hidden";
  }, 500);
}

modals.forEach((modal, index) => {
  modal.addEventListener("click", (event) => {
    if (event.target === modal) {
      closeModal(index);
    }
  });
});
