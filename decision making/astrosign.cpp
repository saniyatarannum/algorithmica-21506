#include<iostream>
using namespace std;
 int main(){
 string m;
 int d;
 cout<<"enter your month and day of birth:";
 cin>>m>>d;
 if(m=="december"){
 if(d>=22){
    cout<<"zodiac sign is capricorn";
 }
 else{
    cout<<"zodiac sign is sagittarius";
 }
    }
  else if(m=="january"){
 if(d<=19){
    cout<<"zodiac sign is capricon";
 }
 else{
    cout<<"zodiac sign is aquaries";
 }
    }
  else if(m=="february"){
 if(d<=18){
    cout<<"zodiac sign is aquaries";
 }
 else{
    cout<<"zodiac sign is pisces";
 }
    }
  else if(m=="march"){
 if(d<=20){
    cout<<"zodiac sign is pisces";
 }
 else{
    cout<<"zodiac sign is aries";
 }
    }
    else if(m=="april"){
 if(d<=19){
    cout<<"zodiac sign is aries";
 }
 else{
    cout<<"zodiac sign is taurus";
 }
    }
   else if(m=="may"){
 if(d<=20){
    cout<<"zodiac sign is taurus";
 }
 else{
    cout<<"zodiac sign is gemini";
 }
    }
   else if(m=="june"){
 if(d<=20){
    cout<<"zodiac sign is gemini";
 }
 else{
    cout<<"zodiac sign is cancer";
 }
    }
    else if(m=="july"){
 if(d<=22){
    cout<<"zodiac sign is cancer";
 }
 else{
    cout<<"zodiac sign is leo";
 }
    }
  else if(m=="august"){
 if(d<=22){
    cout<<"zodiac sign is leo";
 }
 else{
    cout<<"zodiac sign is virgo";
 }
    }
    else if(m=="september"){
 if(d<=22){
    cout<<"zodiac sign is virgo";
 }
 else{
    cout<<"zodiac sign is libra";
 }
    }
    else if(m=="october"){
 if(d<=22){
    cout<<"zodiac sign is libra";
 }
 else{
    cout<<"zodiac sign is scorpio";
 }
    }
    else if(m=="november"){
 if(d<=21){
    cout<<"zodiac sign is scorpio";
 }
 else{
    cout<<"zodiac sign is sagittarius";
 }
    }
    else{
        cout<<"entered inappropriate data";
    }

 }
