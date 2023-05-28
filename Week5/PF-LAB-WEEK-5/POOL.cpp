#include <iostream>
using namespace std;
void notfilled(double volume, double volumefilled, double pipe1flow, double pipe2flow, double totalpipeflowperhour);
double overfilled(double volume, double totalpipeflow);
int main()
{
    system("cls");
    double hours, pipe1flow, pipe2flow, volume, volumeempty, volumefilled, totalpipeflowperhour, totalpipeflow, overflow;
    cout << "Enter the total volume of the pool (in liters): ";
    cin >> volume;
    cout << "Enter the rate of flow for pipe 1 (liters/hours): ";
    cin >> pipe1flow;
    cout << "Enter the rate of flow for pipe 2 (liters/hours): ";
    cin >> pipe2flow;
    cout << "Enter the number of hours the guard was gone (hours): ";
    cin >> hours;
    totalpipeflowperhour = pipe1flow + pipe2flow;
    totalpipeflow = (totalpipeflowperhour * hours);
    volumeempty = volume - totalpipeflow;
    volumefilled = volume - volumeempty;
    if (volumefilled < volume)
    {
        notfilled(volume, volumefilled, pipe1flow, pipe2flow, totalpipeflowperhour);
    }
    if (volumefilled > volume)
    {
        overflow = overfilled(volume, totalpipeflow);
        cout << endl;
        cout << overflow << " lts of water overflowed in " << hours << " hours." << endl;


    }
   
}
void notfilled(double volume, double volumefilled, double pipe1flow, double pipe2flow, double totalpipeflowperhour)
{
    double a, pipe1flowpercentage, pipe2flowpercentage;
    int filledvolumepercentage, pipe1percentage, pipe2percentage;
    a = volumefilled / volume;
    filledvolumepercentage = (a * 100);
    pipe1flowpercentage = pipe1flow/totalpipeflowperhour;
    pipe2flowpercentage = pipe2flow/totalpipeflowperhour;
    pipe1percentage = (pipe1flowpercentage * 100);
    pipe2percentage = (pipe2flowpercentage * 100);
    cout << endl;
    cout << "The Pool is " << filledvolumepercentage << "% filled. Pipe 1: " << pipe1percentage << "%. Pipe 2: " << pipe2percentage << "%." << endl;

}
double overfilled(double volume, double totalpipeflow)
{
    double overfilled;
    overfilled = totalpipeflow - volume;
    return overfilled;
}