selects.forEach((select, index) => {
  select.value = selectedOptions[index];
});

customCommandsInputs.forEach((command, index) => {
  command.value = customCommands[index];
});

customValuesInput.forEach((value, index) => {
  value.value = customValues[index];
});
