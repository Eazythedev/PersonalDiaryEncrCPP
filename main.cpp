// DiaryEntry.h
#ifndef DIARYENTRY_H
#define DIARYENTRY_H

#include <string>

class DiaryEntry {
private:
    std::string date;
    std::string title;
    std::string content;

public:
DiaryEntry(const std::string& date, const std::string& title, const std::string& content);
std::string getDate() const;
std::string getTitle() const;
std::string getContent() const;
void display() const;
};

#endif

#include "DiaryEntry.h"
#include <iostream>

DiaryEntry::DiaryEntry(const std::string& date, const std::string& title, const std::string& content)
: date(date), title(title), content(content) {}

std::string DiaryEntry::getDate() const {
    return date;
}

std::string DiaryEntry::getTitle() const {
    return title;
}

std::string DiaryEntry::getContent() const {
    return content;
}

void DiaryEntry::display() const {
    std::cout << "Date: " << date << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Content: " << content << std::endl;
    //return 0;
}
