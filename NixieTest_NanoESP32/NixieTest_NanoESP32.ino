// #define A1 A0
// #define B1 A1
// #define C1 A2
// #define D1 A3
// #define A2 A4
// #define B2 A5
// #define C2 A6
// #define D2 A7
// #define A3 D10
// #define B3 D9
// #define C3 D8
// #define D3 D7
// #define A4 D6
// #define B4 D5
// #define C4 D4
// #define D4 D3

// ESP32 pin numbering
#define A1 1
#define B1 2
#define C1 3
#define D1 4
#define A2 11
#define B2 12
#define C2 13
#define D2 14
#define A3 21
#define B3 18
#define C3 17
#define D3 10
#define A4 9
#define B4 8
#define C4 7
#define D4 6

char A[4] = { A1, A2, A3, A4 };
char B[4] = { B1, B2, B3, B4 };
char C[4] = { C1, C2, C3, C4 };
char D[4] = { D1, D2, D3, D4 };

void setup() {
  // put your setup code here, to run once:
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(C4, OUTPUT);
  pinMode(D4, OUTPUT);

  for (char i = 0; i < 4; i++) {
    digitalWrite(A[i], HIGH);
    digitalWrite(B[i], HIGH);
    digitalWrite(C[i], HIGH);
    digitalWrite(D[i], HIGH);
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
  for (int m = 0; m < 4; m++){
    writenumber(m, i);
  }
    delay(500);
  }
}

void writenumber(int a, int b) {
  switch (b) {
    case 0:
      digitalWrite(A[a], LOW);
      digitalWrite(B[a], LOW);
      digitalWrite(C[a], LOW);
      digitalWrite(D[a], LOW);
      break;
    case 9:
      digitalWrite(A[a], HIGH);
      digitalWrite(B[a], LOW);
      digitalWrite(C[a], LOW);
      digitalWrite(D[a], LOW);
      break;
    case 8:
      digitalWrite(A[a], LOW);
      digitalWrite(B[a], HIGH);
      digitalWrite(C[a], LOW);
      digitalWrite(D[a], LOW);
      break;
    case 7:
      digitalWrite(A[a], HIGH);
      digitalWrite(B[a], HIGH);
      digitalWrite(C[a], LOW);
      digitalWrite(D[a], LOW);
      break;
    case 6:
      digitalWrite(A[a], LOW);
      digitalWrite(B[a], LOW);
      digitalWrite(C[a], HIGH);
      digitalWrite(D[a], LOW);
      break;
    case 5:
      digitalWrite(A[a], HIGH);
      digitalWrite(B[a], LOW);
      digitalWrite(C[a], HIGH);
      digitalWrite(D[a], LOW);
      break;
    case 4:
      digitalWrite(A[a], LOW);
      digitalWrite(B[a], HIGH);
      digitalWrite(C[a], HIGH);
      digitalWrite(D[a], LOW);
      break;
    case 3:
      digitalWrite(A[a], HIGH);
      digitalWrite(B[a], HIGH);
      digitalWrite(C[a], HIGH);
      digitalWrite(D[a], LOW);
      break;
    case 2:
      digitalWrite(A[a], LOW);
      digitalWrite(B[a], LOW);
      digitalWrite(C[a], LOW);
      digitalWrite(D[a], HIGH);
      break;
    case 1:
      digitalWrite(A[a], HIGH);
      digitalWrite(B[a], LOW);
      digitalWrite(C[a], LOW);
      digitalWrite(D[a], HIGH);
      break;
  }
}

void off(int a) {
  digitalWrite(A[a], HIGH);
  digitalWrite(B[a], HIGH);
  digitalWrite(C[a], HIGH);
  digitalWrite(D[a], HIGH);
}
