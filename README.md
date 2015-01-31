# C---Analytics-and-SQLite
Interfacing SQLite and C++ code. View Table, Insert Record, Find Avg over Interval.


Program that interfaces with SQLite database. Displays records, inserts records, finds average over a range.

REQUIRES BOOST AND SQLITE3 LIBRARIES!!!

This program is a C++ interface to SQLite database. main.cpp(main class), include\Engine.h(header), 
and src\Engine.cpp(implementation) are the main files that went into developing this program.
The purpose of this program is to show how one can implement C++ code with a SQLite backend. In this program 
I have included 4 functions. The first function [createtable()] will create a table in the SQLite database. If a 
table exists this function will be passed over. The second function [displaymoneyvstime()] displays all the records
stored in the database. The third function [inputmoneyvstime(int, int)] allows a user to input a record into the database. 
The fourth and last function [meanmoney(int, int)] allows a user to specify a start and end date to find an average over
a specify interval.
