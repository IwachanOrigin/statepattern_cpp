# statepattern cpp demo code

## Overview

    State Patternの使い方

## 使いどころ

    状態をオブジェクトとして扱うパターンです。インターフェイスを通して状態のクラスを生成します。  
    条件分岐を使用して状態を切り替えるよりも重複コードが減るのが利点です。  
    状態の変化を利用者側(main.cpp)は特別意識しなくても良いのも扱いやすい点です。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/statepattern_cpp/blob/master/LICENSE)

