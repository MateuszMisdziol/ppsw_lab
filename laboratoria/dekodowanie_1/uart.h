#define RECIVER_SIZE 15

__irq void UART0_Interrupt (void);
void UART_InitWithInt(unsigned int uiBaudRate);
void Reciever_PutCharacterToBuffer(char cCharacter);
enum eReciverStatus eReciever_GetStatus(void);
void Reciever_GetStringCopy(char * ucDestination);

char Transmiter_GetCharacterFromBuffer(void);
void Transmiter_SendString(char cString[]);
enum eTransmiterStatus Transmiter_GetStatus(void);
