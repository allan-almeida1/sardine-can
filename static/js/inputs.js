let enableCustomInputs = [false, false, false, false];
let selectedOptions = ["MARKER 1", "MARKER 2", "TOGGLE SOLO 1", "TAP TEMPO"];
let customCommands = ["", "", "", ""];
let customValues = ["", "", "", ""];

const customInputs = document.querySelectorAll(".custom-input");
const selects = document.querySelectorAll(".function-select");
const customCommandsInputs = document.querySelectorAll(".custom-command");
const customValuesInput = document.querySelectorAll(".custom-value");
const pedal_descriptions = [
  document.getElementById("pedal-description-1"),
  document.getElementById("pedal-description-2"),
  document.getElementById("pedal-description-3"),
  document.getElementById("pedal-description-4"),
];

const customInputContainers = document.querySelectorAll(
  ".custom-input-container"
);

document.addEventListener("DOMContentLoaded", function () {
  customInputs.forEach((input, index) => {
    input.addEventListener("change", (event) => {
      enableCustomInputs[index] = event.target.checked;
      customInputContainers[index].style.display = enableCustomInputs[index]
        ? "flex"
        : "none";
      selects[index].disabled = enableCustomInputs[index];
    });
  });

  selects.forEach((select, index) => {
    select.addEventListener("change", (event) => {
      const newValue = event.target.value;
      selectedOptions[index] = newValue;
      pedal_descriptions[index].innerText = selectedOptions[index];
    });
  });

  customCommandsInputs.forEach((command, index) => {
    command.addEventListener("change", (event) => {
      customCommands[index] = event.target.value;
      pedal_descriptions[index].innerText = customCommands[index];
    });
  });
});
