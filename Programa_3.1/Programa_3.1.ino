int segA = 3; // top
int segB = 4; // right-top
int segC = 5; // right-bottom
int segD = 6; // bottom
int segE = 7; // left-bottom
int segF = 8; // left-top
int segG = 9; // middle
int segH = 10;// dot
 
void setup() {
    // put your setup code here, to run once:
    pinMode(segA, OUTPUT);
    pinMode(segB, OUTPUT);
    pinMode(segC, OUTPUT);
    pinMode(segD, OUTPUT);
    pinMode(segE, OUTPUT);
    pinMode(segF, OUTPUT);
    pinMode(segG, OUTPUT);
    pinMode(segH, OUTPUT);
}
 
//-----------------------------------------------------//
static int nTicks = 0;
 
void loop()
{
    delay(1000);
    drawDigitFast(nTicks % 10);
    nTicks++;
}
 
 
//-----------------------------------------------------//
void drawDigitFast(int n)
{
    const byte aPins[8] = {
        segA, segB, segC, segD, segE, segF, segG, segH 
    };
    const byte aSegments[10][8] = {
        //  A     B     C     D     E     F     G    H
        { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH,  LOW, LOW }, // 0
        {  LOW, HIGH, HIGH,  LOW,  LOW,  LOW,  LOW, LOW }, // 1
        { HIGH, HIGH,  LOW, HIGH, HIGH,  LOW, HIGH, LOW }, // 2
        { HIGH, HIGH, HIGH, HIGH,  LOW,  LOW, HIGH, LOW }, // 3
        {  LOW, HIGH, HIGH,  LOW,  LOW, HIGH, HIGH, LOW }, // 4
        { HIGH,  LOW, HIGH, HIGH,  LOW, HIGH, HIGH, LOW }, // 5
        { HIGH,  LOW, HIGH, HIGH, HIGH, HIGH, HIGH, LOW }, // 6
        { HIGH, HIGH, HIGH,  LOW,  LOW,  LOW, LOW,  LOW }, // 7
        { HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW }, // 8
        { HIGH, HIGH, HIGH, HIGH,  LOW, HIGH, HIGH, LOW }, // 9
    };
     for( int i = 0; i < 8; i++ )
     {
        digitalWrite( aPins[i], aSegments[n][i] );
     }
} 
