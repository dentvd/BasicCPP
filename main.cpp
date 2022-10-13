#include<iostream>
using namespace std;
int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|    1 - Task_1            |" << endl;
    cout << "\t\t\t|    2 - Task_2            |" << endl;
    cout << "\t\t\t|    3 - Task_3            |" << endl;
    cout << "\t\t\t|    4 - Task_4            |" << endl;
    cout << "\t\t\t|    5 - Task_5            |" << endl;
    cout << "\t\t\t|    6 - Task_6            |" << endl;
    cout << "\t\t\t|    7 - Task_7            |" << endl;
    cout << "\t\t\t|    8 - Task_8            |" << endl;
    cout << "\t\t\t|    9 - Task_9            |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\t|    Exit - 0              |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\tEnter task =>";
    int number;
    cin >> number;
    system("cls");
    switch (number)
    {
    case 1:
    {
        int i = 0;
        int a;
        cout << "\tEnter number=>";
        cin >> a;
        while (i <= a)
        {
            cout << "  " << i;
            i++;
        }

    }break;
    case 2:
    {
        cout << "\t\t\t#>---------<Task 2 >------<#" << endl;
        cout << "\t\t\t|    1 - Period numbers    |" << endl;
        cout << "\t\t\t|    2 - Paired numbers    |" << endl;
        cout << "\t\t\t|    3 - Unpaired numbers  |" << endl;
        cout << "\t\t\t|    4 - Multiples of 7    |" << endl;
        cout << "\t\t\t#>------------------------<#" << endl;
        cout << "\t\t\t|    Exit - 0              |" << endl;
        cout << "\t\t\t#>------------------------<#" << endl;
        cout << "\t\t\tEnter task =>";
        int number;
        cin >> number;
        system("cls");
        switch (number)
        {
        case 1:
        {
            int start, end, temp;

            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }
            cout << "\tPeriod numbers:" << endl;
            while (start != end + 1)
            {

                cout << start << "  " << endl;
                start++;

            }

        }break;
        case 2:
        {
            int start, end, temp;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;
            cout << "\tPaired numbers:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {

                if (start % 2 == 0)
                {

                    cout << "\t" << start << endl;
                }

                start++;

            }
        }break;
        case 3:
        {
            int start, end, temp;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;

            cout << "\tUnpaired numbers:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {

                if (start % 2 != 0)
                {

                    cout << "\t" << start << endl;
                }

                start++;

            }
        }break;
        case 4:
        {
            int start, end, temp;
            cout << "\tEnter start range=>";
            cin >> start;
            cout << "\tEnter finish range=>";
            cin >> end;

            cout << "\tMultiples of 7:" << endl;
            if (start > end)
            {
                temp = start;
                start = end;
                end = temp;
            }

            while (start != end + 1)
            {

                if (start % 7 == 0)
                {

                    cout << "\t" << start << endl;
                }

                start++;

            }
        }break;
        }return 0;

    }break;
    case 3:
    {
        int start, end, temp, sum = 0, a;
        cout << "\tEnter start range=>";
        cin >> start;
        cout << "\tEnter finish range=>";
        cin >> end;

        cout << "\tSum:" << endl;
        if (start > end)
        {
            temp = start;
            start = end;
            end = temp;
        }

        while (start != end + 1)
        {

            sum += start;

            start++;

        }
        cout << "\t" << sum;
    }break;
    case 4:
    {
        int i, n, sum = 0;

        do {
            cin >> i;
            sum += i;
        } while (i != 0);
        {

            cout << "Sum" << sum;
        }

    }break;
    case 5:
    {
        int z = 0, y = -1;
        int start, end, x;
        srand(time(NULL));
        x = 1 + rand() % 500;
        cout << "Try to guess a number 1 - 500" << endl;
        cout << "============ 0 - exit ============\n";
        start = time(0);
        while (y != x) {
            z++;
            cout << "Enter: ", cin >> y;
            if (y == 0)
                exit(0);
            if (y != x)
            {
                cout << "guessed wrong\n";
                (y > x) ? cout << "My number is less!\n" : cout << "My number is more!\n";
            }

        }
        end = time(0);
        cout << "YOU'R RIGHT!!!" << endl;
        cout << "You tried to guess " << z << " times...\n";
        cout << "Time lost: " << end - start << " seconds" << endl;
    }break;
    case 6:
    {   cout << "\t\t\tSpecify the amount to be exchanged=>";
    float many;
    cin >> many;
    cout << "\t\t\t#>-------<Convert>----------<#" << endl;
    cout << "\t\t\t|         1 - USD            |" << endl;
    cout << "\t\t\t|         2 - EUR            |" << endl;
    cout << "\t\t\t|         3 - UAN            |" << endl;
    cout << "\t\t\t#>--------------------------<#" << endl;
    cout << "\t\t\t|         Exit - 0           |" << endl;
    cout << "\t\t\t#>--------------------------<#" << endl;
    cout << "\t\t\tSpecify the convert currency =>";
    int number;

    double  usd, eur, uan;
    cin >> number;
    system("cls");
    switch (number)
    {
    case 1:
    {
        cout << "\t\t\t#>-------<Convert>----------<#" << endl;
        cout << "\t\t\t|         1 - USD            |" << endl;
        cout << "\t\t\t|         2 - EUR            |" << endl;
        cout << "\t\t\t|         3 - UAN            |" << endl;
        cout << "\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t|         Exit - 0           |" << endl;
        cout << "\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\tSpecify the required currency =>";
        int number;
        cin >> number;
        system("cls");
        switch (number)
        {
        case 1:
        {
            cout << many << "  USD";
        }break;
        case 2:
        {
            eur = (many * 1.031);
            int sizeOfNumber = 0;
            int temp = eur;
            do
            {
                sizeOfNumber++;

                temp /= 10;
            } while (temp);
            cout.precision(sizeOfNumber + 2);
            cout << eur << " EUR";

        }break;
        case 3:
        {
            uan = (many * 36.569);
            int sizeOfNumber = 0;
            int temp = uan;
            do
            {
                sizeOfNumber++;

                temp /= 10;
            } while (temp);
            cout.precision(sizeOfNumber + 2);
            cout << uan << " UAN";
        }break;
        }
    }break;
    case 2:
    {
        cout << "\t\t\t#>-------<Convert>----------<#" << endl;
        cout << "\t\t\t|         1 - USD            |" << endl;
        cout << "\t\t\t|         2 - EUR            |" << endl;
        cout << "\t\t\t|         3 - UAN            |" << endl;
        cout << "\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t|         Exit - 0           |" << endl;
        cout << "\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\tSpecify the required currency =>";
        int number;
        cin >> number;
        system("cls");
        switch (number)
        {
        case 1:
        {
            usd = (many * 0.969);
            int sizeOfNumber = 0;

            int temp = usd;
            do
            {
                sizeOfNumber++;

                temp /= 10;
            } while (temp);
            cout.precision(sizeOfNumber + 2);
            cout << usd << " USD";
        }break;
        case 2:
        {
            cout << many << "  EUR";
        }break;
        case 3:
        {

            uan = (many * 35.459);
            int sizeOfNumber = 0;

            int temp = uan;
            do
            {
                sizeOfNumber++;

                temp /= 10;
            } while (temp);
            cout.precision(sizeOfNumber + 2);
            cout << uan << " UAN";
        }
        }break;
    case 3:
    {
        cout << "\t\t\t#>-------<Convert>----------<#" << endl;
        cout << "\t\t\t|         1 - USD            |" << endl;
        cout << "\t\t\t|         2 - EUR            |" << endl;
        cout << "\t\t\t|         3 - UAN            |" << endl;
        cout << "\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t|         Exit - 0           |" << endl;
        cout << "\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\tSpecify the required currency =>";
        int number;
        cin >> number;
        system("cls");
        switch (number)
        {
        case 1:
        {
            usd = (many * 0.027);
            int sizeOfNumber = 0;
            int temp = usd;
            do
            {
                sizeOfNumber++;

                temp /= 10;
            } while (temp);
            cout.precision(sizeOfNumber + 2);
            cout << usd << " USD";
        }break;
        case 2:
        {
            eur = (many * 0.028);
            int sizeOfNumber = 0;
            int temp = eur;
            do
            {
                sizeOfNumber++;

                temp /= 10;
            } while (temp);
            cout.precision(sizeOfNumber + 2);
            cout << eur << " EUR";
        }break;

        }

    }break;
    }
    }

    } break;



    return 0;
    }

}