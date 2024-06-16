// C++ code
//

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);


  char TextToMorse[] = "dhanushka";

  for (int character = 0; character < sizeof(TextToMorse); character++)
  {
    alphabetToMorse(TextToMorse[character]);
  }
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void alphabetToMorse(char character)
{
  switch(character)
  {
    case 'a':
    dot();
    dash();
  break;
  case 'b':
    dash();
    dot();
    dot();
    dot();
  break;
  case 'c':
    dash();
    dot();
    dash();
    dot();
  break;
  case 'd':
    dash();
    dot();
    dot();
  break;
  case 'e':
    dot();
  break;
  case 'f':
    dot();
    dot();
    dash();
    dot();
  break;
  case 'g':
    dash();
    dash();
    dot();
  break;
  case 'h':
    dot();
    dot();
    dot();
    dot();
  break;
  case 'i':
    dot();
    dot();
  break;
  case 'j':
    dot();
    dash();
    dash();
    dash();
    dash();
  break;
  case 'k':
    dash();
    dot();
    dash();
  break;
  case 'l':
    dot();
    dash();
    dot();
    dot();
  break;
  case 'm':
    dash();
    dash();
  break;
  case 'n':
    dash();
    dot();
  break;
  case 'o':
    dash();
    dash();
    dash();
  break;
  case 'p':
    dot();
    dash();
    dash();
    dot();
  break;
  case 'q':
    dash();
    dash();
    dot();
    dash();
  break;
  case 'r':
    dot();
    dash();
    dot();
  break;
  case 's':
    dot();
    dot();
    dot();
  break;
  case 't':
    dash();
  break;
  case 'u':
    dot();
    dot();
    dash();
  break;
  case 'v':
    dot();
    dot();
    dot();
    dash();
  break;
  case 'w':
    dot();
    dash();
    dash();
  break;
  case 'x':
    dash();
    dot();
    dot();
    dash();
  break;
  case 'y':
    dash();
    dot();
    dash();
    dash();
  break;
  case 'z':
    dash();
    dash();
    dot();
    dot();
  break;
  }
  delay(1000);
}
