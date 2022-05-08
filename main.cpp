#include <iostream>                // *Prohibited libraries are not used*
#include <iomanip>
using namespace std;
#define row 8
#define column 8

void SetValue(int array[row][column]){   // Set value Function
    char array1[2];
    int a1 = 65 , b1 = 90 , a2 = 49 , b2 = 57 ,x, y , number;
    cout<<"Enter Position : ";
    main1:
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    if ( a1 <= int(array1[0]) <= b1  &&  a2 <= int(array1[1]) <= b2  ){
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        if (x < row && y < column){
            cout<<"\nPlease Enter Number Example (++123++): ";
            cin>>number;
            array[x][y] = number;
        }
        else{cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number : ";
            goto main1;
        }
    }
    else{
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number : ";
        goto main1;
    }
}



void NumberTable1(int array[row][column]) {                   // Numbers Table Function == Used in Program for Example Table
    int i = 65, j, count = 1 , x = 0 , y = 0;
    cout << "     " << char(i);
    for (i = 66; i < 90; ++i) {
        if (count <= column - 1) {
            cout << "    " << char(i);
            ++count;
        }
    }
    cout << endl;
    cout << "   ~~~~|";
    for (i = 2; i <= column ; ++i)
        cout << "~~~~|";
    cout << endl;
    for (i = 1; i <= row; ++i) {
        cout << setw(2) << i << "|";
        for (j = 1; j <= column; ++j) {
            if (x < i)
                if (y < column) {
                    cout << setw(4) <<array[x][y]<< "|";
                    ++y;
                }
        }
        y = 0;
        ++x;
        cout << endl;
        cout << " ~|~~~~";
        for (j = 2; j <= column - 1; ++j)
            cout << "|~~~~";
        cout << "|~~~~|";
        cout << endl;
    }
}



void NumberTable2(int array[row][column]) {             // Numbers Table Function == Used For Set Value , EveryTime User Set Value Print Number Table For User convenience
    SetValue(array);
    int i = 65, j, count = 1 , x = 0 , y = 0;
    cout << "     " << char(i);
    for (i = 66; i < 90; ++i) {
        if (count <= column - 1) {
            cout << "    " << char(i);
            ++count;
        }
    }
    cout << endl;
    cout << "   ~~~~|";
    for (i = 2; i <= column; ++i)
        cout << "~~~~|";
    cout << endl;
    for (i = 1; i <= row; ++i) {
        cout << setw(2) << i << "|";
        for (j = 1; j <= column; ++j) {
            if (x < i)
                if (y < column) {
                    cout << setw(4) <<array[x][y]<< "|";
                    ++y;
                }
        }
        y = 0;
        ++x;
        cout << endl;
        cout << " ~|~~~~";
        for (j = 2; j <= column - 1; ++j)
            cout << "|~~~~";
        cout << "|~~~~|";
        cout << endl;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Sum(int array[row][column]) {     // From This Function To main function No more Information , Used Related Names
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , sum = 0;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            for (; y <= end2; ++y) {
                sum += array[x][y];
            }
            array[loc1][loc2] = sum;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Sum(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , sum = 0;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row  && y < column && y == end2 && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            for (; x <= end1; ++x) {
                sum += array[x][y];
            }
            array[loc1][loc2] = sum;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Submission(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , submission ;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            submission = array[x][y];
            for (y = y + 1; y <= end2; ++y) {
                submission -= array[x][y];
            }
            array[loc1][loc2] = submission;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Submission(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , submission ;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row &&  y < column && y == end2 && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            submission = array[x][y];
            for (x = x +1; x <= end1; ++x) {
                submission -= array[x][y];
            }
            array[loc1][loc2] = submission;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Multiplication(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , multiplication = 1;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            for (; y <= end2; ++y)
                multiplication *= array[x][y];
            array[loc1][loc2] = multiplication;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Multiplication(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , multiplication = 1;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && y < column && y == end2 && end1 < row  && end2 < column && loc1 < row && loc2 < column) {
            for (; x <= end1; ++x) {
                multiplication *= array[x][y];
            }
            array[loc1][loc2] = multiplication;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Division(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2 , division;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            division = array[x][y];
            for (y = y + 1;y <= end2;++y)
                if (array[x][y] == 0) {
                    cout<<"Denominator of Division is 0 and Result is Error\nThe period you had chosen Have Number 0\nPlease Set The missing Value"<<endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    SetValue(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    goto main1;
                }
                else
                    division = division / array[x][y];
            array[loc1][loc2] = division;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Division(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2 , division;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && y < column && y == end2 && end1 < row && end2 < column && loc1 < row && loc2 < column) {
            division = array[x][y];
            for (x = x + 1;x <= end1;++x)
                if (array[x][y] == 0) {
                    cout<<"Denominator of Division is 0 and Result is Error\nThe period you had chosen Have Number 0\nPlease Set The missing Value"<<endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    SetValue(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    goto main1;
                }
                else
                    division = division / array[x][y];
            array[loc1][loc2] = division;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Average(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , sum = 0 , average;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column &&   end2 < column && loc1 < row && loc2 < column) {
            for (; y <= end2; ++y) {
                sum += array[x][y];
            }
            average = sum / y ;
            array[loc1][loc2] = average;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Average(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , sum = 0 , average;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row  && y < column && y == end2 && end2 < column && loc1 < row && loc2 < column) {
            for (; x <= end1; ++x) {
                sum += array[x][y];
            }
            average = sum / x ;
            array[loc1][loc2] = average;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Max(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , max;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column && end1 < row  && end2 < column && loc1 < row && loc2 < column) {
            max = array[x][y];
            for (y = y + 1; y <= end2; ++y) {
                if (array[x][y] > max)
                    max = array[x][y];
            }
            array[loc1][loc2] = max;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Max(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , max;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && y < column && y == end2 && end1 < row  && end2 < column && loc1 < row && loc2 < column) {
            max = array[x][y];
            for (x = x + 1; x <= end1; ++x) {
                if (array[x][y] > max)
                    max = array[x][y];
            }
            array[loc1][loc2] = max;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Min(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , min;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && x == end1 && y < column && end1 < row  && end2 < column && loc1 < row && loc2 < column) {
            min = array[x][y];
            for (y = y + 1; y <= end2; ++y) {
                if (array[x][y] < min)
                    min = array[x][y];
            }
            array[loc1][loc2] = min;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Column_Min(int array[row][column]) {
    char array1[2];
    char array2[2];
    char array3[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , loc1  , loc2  , min;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout<<"Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    cout<<"Enter Location : "<<endl;
    int k = 0;
    for (;k < 2;++k)
        cin>>array3[k];
    if ( (a1 <= int(array1[0]) && int(array2[0]) && int(array3[0]) <= b1 ) && (a2 <= int(array1[1]) && int(array2[1]) && int(array3[1]) <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        loc1 = int(array3[1]) - 49;
        loc2 = int(array3[0]) - 65;
        if (x < row && y < column && y == end2 && end1 < row  && end2 < column && loc1 < row && loc2 < column) {
            min = array[x][y];
            for (x = x + 1; x <= end1; ++x) {
                if (array[x][y] < min)
                    min = array[x][y];
            }
            array[loc1][loc2] = min;
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Sorting_Ascending(int array[row][column]) {
    char array1[2];
    char array2[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , temp;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout << "Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    if ( (a1 <= int(array1[0]) && int(array2[0])  <= b1 ) && (a2 <= int(array1[1]) && int(array2[1])  <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        if (x < row  && x == end1 && y < column && end1 < row  && end2 < column ) {
            for (;x <= end1 ;++x) {
                for (; y <= end2; ++y) {
                    for (int m = 0; m <= end2 - 1; ++m) {
                        if (array[x][y] < array[x][m]) {
                            temp = array[x][y];
                            array[x][y] = array[x][m];
                            array[x][m] = temp;
                        }
                    }
                }
            }
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}



void Set_Start_And_End_Point_Calculate_Row_Sorting_Descending(int array[row][column]) {
    char array1[2];
    char array2[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , temp;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout << "Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    if ( (a1 <= int(array1[0]) && int(array2[0])  <= b1 ) && (a2 <= int(array1[1]) && int(array2[1])  <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        if (x < row  && x == end1 && y < column && end1 < row  && end2 < column ) {
            for (;x <= end1 ;++x) {
                for (; y <= end2; ++y) {
                    for (int m = 0; m <= end2 - 1; ++m) {
                        if (array[x][y] > array[x][m]) {
                            temp = array[x][y];
                            array[x][y] = array[x][m];
                            array[x][m] = temp;
                        }
                    }
                }
            }
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}




void Set_Start_And_End_Point_Calculate_Column_Sorting_Ascending(int array[row][column]) {
    char array1[2];
    char array2[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , temp;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout << "Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    if ( (a1 <= int(array1[0]) && int(array2[0])  <= b1 ) && (a2 <= int(array1[1]) && int(array2[1])  <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        if (x < row  &&  y < column && y == end2 && end1 < row  && end2 < column ) {
            for (;y <= end2 ;++y) {
                for (; x <= end1; ++x) {
                    for (int m = 0; m <= end1 - 1; ++m) {
                        if (array[x][y] < array[m][y]) {
                            temp = array[x][y];
                            array[x][y] = array[m][y];
                            array[m][y] = temp;
                        }
                    }
                }
            }
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}




void Set_Start_And_End_Point_Calculate_Column_Sorting_Descending(int array[row][column]) {
    char array1[2];
    char array2[2];
    int a1 = 65, b1 = 90, a2 = 49, b2 = 57, x, y, end1 ,end2  , temp;
    main1:
    cout << "Enter Start Position : "<<endl;
    int i = 0;
    for (;i < 2;++i)
        cin>>array1[i];
    cout << "Enter End Position : "<<endl;
    int j = 0;
    for (; j < 2; ++j)
        cin>>array2[j];
    if ( (a1 <= int(array1[0]) && int(array2[0])  <= b1 ) && (a2 <= int(array1[1]) && int(array2[1])  <= b2) ) {
        x = int(array1[1]) - 49;
        y = int(array1[0]) - 65;
        end1 = int(array2[1]) - 49;
        end2 = int(array2[0]) - 65;
        if (x < row  &&  y < column && y == end2 && end1 < row  && end2 < column ) {
            for (;y <= end2 ;++y) {
                for (; x <= end1; ++x) {
                    for (int m = 0; m <= end1 - 1; ++m) {
                        if (array[x][y] > array[m][y]) {
                            temp = array[x][y];
                            array[x][y] = array[m][y];
                            array[m][y] = temp;
                        }
                    }
                }
            }
        }
        else {
            cout << "\nUndefined Letter Or Number, Please Enter Valid Letter Or Number " << endl;
            goto main1;
        }
    }
    else {
        cout<<"\nUndefined Letter Or Number, Please Enter Valid Letter Or Number "<<endl;
        goto main1;
    }
}




int main() {   // Main Program    , *Prohibited libraries are not used*
    int  array[row][column] = {};
    char n;
    cout<<"***** ^_Welcome To Excel Program_^ *****"<<endl;
    while (true) {
        main1 :
        cout << "+++++      ^_Excel Menu_^          +++++" << endl;
        cout << "1.Numbers Table Example" << endl;
        cout << "2.Functions Name" << endl;
        cout << "3.Set Value" << endl;
        cout << "4.Calculations" << endl;
        cout << "5.Sorting" << endl;
        cout << "6.Print Excel" << endl;
        cout << "7.Exit" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "Enter Number : "<<endl;
        cin >> n;
        if (int(n) == 48)
            return 0;
        else if (int(n) == 49) { //Put Table Function n*n
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            main2:
            cout << "+++++ ^_Numbers Table Example Menu_^ +++++" << endl;
            cout<< "1.Numbers Table"<<endl;
            cout<< "2.Exit to Excel Menu"<<endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<< "Enter Number : "<<endl;
            cin>>n;
            if (int(n) == 48)
                return 0;
            else if (int(n) == 49) {
                NumberTable1(array);
                main2_1:
                cout << "1.Exit to Numbers Table Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49)
                    goto main2;
                else {
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout << "Undefined Number , Please Enter Number 1 : " << endl;
                    goto main2_1;
                }
            }
            else if (int(n) == 50)
                goto main1;
            else{
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Undefined Number , Please Enter Number 1 Or 2 :"<<endl;
                goto main2;
            }
        }
        else if (int(n) == 50) { //Put a menu to choose Sum Or Submission Divide or multiply
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            main3:
            cout<<"+++++ ^_Functions Name Menu_^ +++++"<<endl;
            cout<<"1.Functions Name"<<endl;
            cout<<"2.Exit to Excel Menu"<<endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Enter Number : "<<endl;
            cin>>n;
            if (int(n) == 48)
                return 0;
            else if (int(n) == 49){
                cout<<"---Main Functions : Sum & submission Division & Multiplication"<<endl;
                cout<<"---Sub Functions : Find Minimum & Maximum"<<endl;
                main3_1:
                cout<<"1.Exit to Functions Name Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49)
                    goto main3;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout << "Undefined Number , Please Enter Number 1 : " << endl;
                    goto main3_1;
                }
            }
            else if (int(n) == 50)
                goto main1;
            else{
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Undefined Number , Please Enter Number 1 Or 2 :"<<endl;
                goto main3;
            }
        }
        else if (int(n) == 51) { // Set Value Menu
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            main4:
            cout<<"+++++ ^_Set Value Menu_^ +++++"<<endl;
            cout<<"1.Set Value"<<endl;
            cout<<"2.Exit to Excel Menu"<<endl;
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Enter Number : "<<endl;
            cin>>n;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            if (int(n) == 48)
                return 0;
            else if (int(n) == 49){
                main4_1:
                NumberTable2(array);
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main4_1_1:
                cout<<"1.Enter Value again"<<endl;
                cout<<"2.Exit to Set Value Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Enter Number :"<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49)
                    goto main4_1;
                else if (int(n) == 50)
                    goto main4;
                else {
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 Or 2 :"<<endl;
                    goto main4_1_1;
                }
            }
            else if (int(n) == 50)
                goto main1;
            else{
                cout<<"Undefined Number , Please Enter Number 1 Or 2 :"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                goto main4;
            }
        }
        else if (int(n) == 52) { //Calculation for Max and Min and Division and multiplication ++ Sum & Submission ++
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            main5:
            cout << "+++++ ^_Calculation Menu_^ +++++"<<endl;
            cout << "1.Sum"<<endl;
            cout << "2.submission"<<endl;
            cout << "3.Multiplication"<<endl;
            cout << "4.Division"<<endl;
            cout << "5.Average"<<endl;
            cout << "6.Find Maximum"<<endl;
            cout << "7.Find Minimum"<<endl;
            cout << "8.Exit to Excel Menu"<<endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << "Enter Number : "<<endl;
            cin>>n;
            if (int(n) == 48)
                return 0;
            else if (int(n) == 49){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_1_1:
                cout << "+++++ ^_Sum Menu_^ +++++"<<endl;
                cout << "1.Row Sum"<<endl;
                cout << "2.Column Sum"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Sum(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_1_2:
                    cout<<"1.Exit to Sum Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_1_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_1_2;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Sum(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_1_3:
                    cout<<"1.Exit to Sum Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_1_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_1_3;
                    }
                }
                else if (int(n) == 51){
                    goto main5;
                }
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_1_1;
                }
            }
            else if (int(n) == 50){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_1_4:
                cout << "+++++ ^_Submission Menu_^ +++++"<<endl;
                cout << "1.Row Submission"<<endl;
                cout << "2.Column Submission"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Submission(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_1_5:
                    cout<<"1.Exit to Submission Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_1_4;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_1_5;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Submission(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_1_6:
                    cout<<"1.Exit to Submission Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_1_4;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_1_6;
                    }
                }
                else if (int(n) == 51)
                    goto main5;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_1_4;
                }
            }
            else if (int(n) == 51){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_1:
                cout << "+++++ ^_Multiplication Menu_^ +++++"<<endl;
                cout << "1.Row Multiplication"<<endl;
                cout << "2.Column Multiplication"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Multiplication(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_2:
                    cout<<"1.Exit to Multiplication Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_2;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Multiplication(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"1.Exit to Multiplication Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_1;
                    }
                }
                else if (int(n) == 51){
                    goto main5;
                }
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_1;
                }
            }
            else if (int(n) == 52){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_3:
                cout << "+++++ ^_Division Menu_^ +++++"<<endl;
                cout << "1.Row Division"<<endl;
                cout << "2.Column Division"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Division(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_4:
                    cout<<"1.Exit to Division Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_3;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_4;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Division(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_5:
                    cout<<"1.Exit to Division Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_3;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_5;
                    }
                }
                else if (int(n) == 51)
                    goto main5;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_3;
                }
            }
            else if (int(n) == 53){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_2_1:
                cout << "+++++ ^_Average Menu_^ +++++"<<endl;
                cout << "1.Row Average"<<endl;
                cout << "2.Column Average"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Average(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_2_2:
                    cout<<"1.Exit to Average Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_2_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_2_2;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Average(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_2_3:
                    cout<<"1.Exit to Average Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_2_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_2_3;
                    }
                }
                else if (int(n) == 51)
                    goto main5;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_2_1;
                }
            }
            else if (int(n) == 54){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_6:
                cout << "+++++ ^_Find Maximum Menu_^ +++++"<<endl;
                cout << "1.Row Maximum"<<endl;
                cout << "2.Column Maximum"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Max(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_7:
                    cout<<"1.Exit to Find Maximum Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49){
                        goto main5_6;
                    }
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_7;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Max(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_8:
                    cout<<"1.Exit to Find Maximum Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49){
                        goto main5_6;
                    }
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_8;
                    }
                }
                else if (int(n) == 51){
                    goto main5;
                }
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_6;
                }
            }
            else if (int(n) == 55){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main5_9:
                cout << "+++++ ^_Find Minimum Menu_^ +++++"<<endl;
                cout << "1.Row Minimum"<<endl;
                cout << "2.Column Minimum"<<endl;
                cout << "3.Exit to Calculation Menu"<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Min(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_10:
                    cout<<"1.Exit to Find Minimum Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_9;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                        cout<<"Undefined Number , Please Enter Number 1 :"<<endl;
                        goto main5_10;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Min(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main5_11:
                    cout<<"1.Exit to Find Minimum Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main5_9;
                    else {
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Undefined Number , Please Enter Number 1 :" << endl;
                        goto main5_11;
                    }
                }
                else if (int(n) == 51)
                    goto main5;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main5_9;
                }
            }
            else if (int(n) == 56){
                goto main1;
            }
            else{
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Undefined Number , Please Enter Number 1 - 8 :"<<endl;
                goto main5;
            }
        }
        else if (int(n) == 53) { //Sorting
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            main6:
            cout << "+++++ ^_Sorting Menu_^ +++++"<<endl;
            cout << "1.Row Sorting"<<endl;
            cout << "2.Column Sorting"<<endl;
            cout << "3.Exit to Excel Menu "<<endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << "Enter Number : "<<endl;
            cin>>n;
            if (int(n) == 48)
                return 0;
            else if (int(n) == 49){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main6_1:
                cout << "+++++ ^_Row Sorting Menu_^ +++++"<<endl;
                cout << "1.Sorting Ascending"<<endl;
                cout << "2.Sorting Descending"<<endl;
                cout << "3.Exit to Sorting Menu "<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Row_Sorting_Ascending(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main6_2:
                    cout << "1.Exit to Row Sorting Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49){
                        goto main6_1;
                    }
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Undefined Number , Please Enter Number 1 :" << endl;
                        goto main6_2;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Row_Sorting_Descending(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main6_3:
                    cout << "1.Exit to Row Sorting Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main6_1;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Undefined Number , Please Enter Number 1 :" << endl;
                        goto main6_3;
                    }
                }
                else if (int(n) == 51)
                    goto main6;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main6_1;
                }
            }
            else if (int(n) == 50){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main6_4:
                cout << "+++++ ^_Column Sorting Menu_^ +++++"<<endl;
                cout << "1.Sorting Ascending"<<endl;
                cout << "2.Sorting Descending"<<endl;
                cout << "3.Exit to Sorting Menu "<<endl;
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49){
                    Set_Start_And_End_Point_Calculate_Column_Sorting_Ascending(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main6_5:
                    cout << "1.Exit to Column Sorting Menu"<<endl;
                    cout<<"Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main6_4;
                    else{
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Undefined Number , Please Enter Number 1 :" << endl;
                        goto main6_5;
                    }
                }
                else if (int(n) == 50){
                    Set_Start_And_End_Point_Calculate_Column_Sorting_Descending(array);
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    main6_6:
                    cout << "1.Exit to Column Sorting Menu"<<endl;
                    cout << "Enter Number : "<<endl;
                    cin>>n;
                    if (int(n) == 48)
                        return 0;
                    else if (int(n) == 49)
                        goto main6_4;
                    else {
                        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                        cout << "Undefined Number , Please Enter Number 1 :" << endl;
                        goto main6_6;
                    }
                }
                else if (int(n) == 51)
                    goto main6;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                    cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                    goto main6_4;
                }
            }
            else if (int(n) == 51)
                goto main1;
            else{
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Undefined Number , Please Enter Number 1 - 3 :"<<endl;
                goto main6;
            }
        }
        else if (int(n) == 54){ //Print Excel
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            main7:
            cout<<"+++++ ^_Print Excel Menu_^ +++++"<<endl;
            cout<<"1.Print Excel"<<endl;
            cout<<"2.Exit to Excel Menu"<<endl;
            cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Enter Number : "<<endl;
            cin>>n;
            if (int(n) == 48)
                return 0;
            else if (int(n) == 49){
                NumberTable1(array);
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                main7_1:
                cout << "1.Exit to Print Excel Menu"<<endl;
                cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Enter Number : "<<endl;
                cin>>n;
                if (int(n) == 48)
                    return 0;
                else if (int(n) == 49)
                    goto main7;
                else{
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "Undefined Number , Please Enter Number 1 :" << endl;
                    goto main7_1;
                }
            }
            else if (int(n) == 50)
                goto main1;
            else{
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"Undefined Number , Please Enter Number 1 - 2 :"<<endl;
                goto main7;
            }
        }
        else if (int(n) == 55) {
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << "***** ^_Have a nice day , SMILE =)_^ *****";
            return 0;
        }
        else {
            cout << "Undefined Number Or Maybe You are Typing Character, Please Enter Number between 1 - 7:" << endl;
        }
    }
}