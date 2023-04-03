void run2048(int puzzle[4][4], int dir) {
  int temp[4][4];
  switch (dir) {
    case 0:  // Left
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          temp[i][j] = puzzle[i][j];
        }
      }
      break;
    case 1:  // Up
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          temp[i][j] = puzzle[3 - j][i];
        }
      }
      break;
    case 2:  // Right
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          temp[i][j] = puzzle[3 - i][3 - j];
        }
      }
      break;
    case 3:  // Down
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          temp[i][j] = puzzle[j][3 - i];
        }
      }
      break;
    default:
      break;
  }

  for (int i = 0; i < 4; i++) {
    int k = 0;
    for (int j = 1; j < 4; j++) {
      if (temp[i][j] == 0) {
        continue;
      }
      if (temp[i][k] == 0) {
        temp[i][k] = temp[i][j];
        temp[i][j] = 0;
        continue;
      }
      if (temp[i][k] == temp[i][j]) {
        temp[i][k] *= 2;
        temp[i][j] = 0;
        k++;
      } else {
        k++;
        temp[i][k] = temp[i][j];
        if (j != k) {
          temp[i][j] = 0;
        }
      }
    }
  }

  switch (dir) {
    case 0:  // Left
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          puzzle[i][j] = temp[i][j];
        }
      }
      break;
    case 1:  // Up
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          puzzle[i][j] = temp[3 - j][i];
        }
      }
      break;
    case 2:  // Right
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          puzzle[i][j] = temp[3 - i][3 - j];
        }
      }
      break;
    case 3:  // Down
      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
          puzzle[i][j] = temp[j][3 - i];
        }
      }
      break;
    default:
      break;
  }
}
