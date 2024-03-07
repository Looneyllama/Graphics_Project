#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <stdlib.h>
using namespace std;
void initalizeTopHalf(uint8_t arr[][640][3],const int maxc, const int maxr){
for(int i = 0; i < maxr / 2;i++){
for( int j = 0; j < maxc; j++){
arr[i][j][0] = static_cast<uint8_t>(255);
arr[i][j][1] = static_cast<uint8_t>(255);
arr[i][j][2] = static_cast<uint8_t>(255);
}
}
}
vector<vector<vector<uint8_t>>> initalizeBottomHalf(const int maxc, const int maxr)
{
vector<uint8_t> vec1;
vector<vector<uint8_t>> vec2;
vector<vector<vector<uint8_t>>> vec3;
vec1.push_back(static_cast<uint8_t>(255));
vec1.push_back(static_cast<uint8_t>(255));
vec1.push_back(static_cast<uint8_t>(255));
for(int i = 160; i < maxr; i++){
for(int j = 0; j < maxc; j++){
vec2.push_back(vec1);
}
vec3.push_back(vec2);
}
return vec3;
}
void fillTopHalf(uint8_t arr[][640][3], const int maxc, const int maxr){
srand(time(0));
int random1 = rand()%256;
int random2 = rand()%256;
int random3 = rand()%256;
// | of the C
for(int i = 40; i < 120; i++){
for(int j = 10; j < 40;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// top of C
for(int i = 10; i < 40; i++){
for(int j = 10; j < 140;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
//bottom of C
for(int i = 120; i < 150; i++){
for(int j = 10; j < 140;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
random1 = rand()%256;
random2 = rand()%256;
random3 = rand()%256;
//start of S
// top of S
for(int i = 10; i < 40; i++){
for(int j = 150; j < 280;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// top | of S
for(int i = 40; i < 65; i++){
for(int j = 150; j < 180;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// mid of S
for(int i = 65; i < 95; i++){
for(int j = 150; j < 280;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// bottom | of the s
for(int i = 95; i < 120; i++){
for(int j = 250; j < 280;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
//bottom of S
for(int i = 120; i < 150; i++){
for(int j = 150; j < 280;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
random1 = rand()%256;
random2 = rand()%256;
random3 = rand()%256;
//start of second C
// | of the C
for(int i = 10; i < 150; i++){
for(int j = 290; j < 320;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// top of C
for(int i = 10; i < 40; i++){
for(int j = 290; j < 420;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
//bottom of C
for(int i = 120; i < 150; i++){
for(int j = 290; j < 420;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
random1 = rand()%256;
random2 = rand()%256;
random3 = rand()%256;
//Start of E
// | of E
for(int i = 10; i < 150; i++){
for(int j = 430; j < 460;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// top of E
for(int i = 10; i < 40; i++){
for(int j = 430; j < 560;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
// middle of E -
for(int i = 65; i < 95; i++){
for(int j = 430; j < 560;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
//bottom of E
for(int i = 120; i < 150; i++){
for(int j = 430; j < 560;j++){
arr[i][j][0] = random1;
arr[i][j][1] = random2;
arr[i][j][2] = random3;
}
}
}
void fillBottomHalf(vector<vector<vector<uint8_t>>>& vec, const int maxc, const int
maxr){
srand(time(0));
int random1 = rand()%256;
int random2 = rand()%256;
int random3 = rand()%256;
// left | for U
for(int i = 10; i < 150; i++){
for(int j = 10; j < 40;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
// bottom of U
for(int i = 120; i < 150; i++){
for(int j = 10; j < 140;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
// right | of U
for(int i = 10; i < 150; i++){
for(int j = 110; j < 140;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
random1 = rand()%256;
random2 = rand()%256;
random3 = rand()%256;
//start of N
// left | of N
for(int i = 10; i < 150; i++){
for(int j = 150; j < 180;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
// diagonal of N
for(int i = 10; i < 150; i++){
int jm = (i-10)/2+75;
int jb = max(50, jm-10);
int je = min(140, jm+10);
for(int j = jb; j <= je; j++){
vec.at(i).at(j+110).at(0) = random1;
vec.at(i).at(j+110).at(1) = random2;
vec.at(i).at(j+110).at(2) = random3;
}
}
//right | of N
for(int i = 10; i < 150; i++){
for(int j = 250; j < 280;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
random1 = rand()%256;
random2 = rand()%256;
random3 = rand()%256;
//start of T
// middle of the T
for(int i = 10; i < 150; i++){
for(int j = 340; j < 370;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
// top of T
for(int i = 10; i < 40; i++){
for(int j = 290; j < 420;j++){
vec.at(i).at(j).at(0) = random1;
vec.at(i).at(j).at(1) = random2;
vec.at(i).at(j).at(2) = random3;
}
}
}
void writeTopHalf(ofstream& fout,uint8_t arr[][640][3], const int maxc, const int
maxr){
fout << "P3" << endl;
fout << maxc << ' ' << maxr << endl;
fout << 255 << endl;
for(int i = 0; i < maxr / 2; i++){
for(int j = 0; j < maxc; j++){
fout << static_cast<uint>(arr[i][j][0]) << ' ' <<
static_cast<uint>(arr[i][j][1]) <<
' ' << static_cast<uint>(arr[i][j][2]) << ' ';
}
fout << endl;
}
}
void writeBottomHalf(ofstream& fout, vector<vector<vector<uint8_t>>>& vec, const
int maxc, const int maxr){
for(int i = 0; i < maxr / 2; i++){
for(int j = 0; j < maxc; j++){
fout << static_cast<uint>(vec.at(i).at(j).at(0)) << ' ';
fout << static_cast<uint>(vec.at(i).at(j).at(1)) << ' ';
fout << static_cast<uint>(vec.at(i).at(j).at(2)) << ' ';
}
fout << endl;
}
}
int main() {
const int MAXR = 320, MAXC = 640;
uint8_t colors[MAXR][MAXC][3];
ofstream fout("csce.ppm");
ofstream test("test.txt");
initalizeTopHalf(colors, MAXC, MAXR);
fillTopHalf(colors, MAXC, MAXR);
writeTopHalf(fout, colors, MAXC, MAXR);
vector<vector<vector<uint8_t>>> vec;
vec = initalizeBottomHalf(MAXC, MAXR);
fillBottomHalf(vec, MAXC, MAXR);
writeBottomHalf(fout, vec, MAXC,MAXR);
fout.close();
return 0;
}
