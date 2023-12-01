#pragma once

#include <list>
#include <iterator>
#include <iostream>

#include "object.h"

/// <summary>Class untuk memanage setiap scene yang akan dijalankan di main class.</summary>
class MonoBehaviour
{
public:

    std::list<Object*> objects; 
    //list scene

    /// <summary>Dipanggil pada frame pertama pada saat program dijalankan.</summary>
    virtual void start();

    /// <summary>Dipanggil setiap kali frame terupdate.</summary>
    virtual void update();

protected:

    /// <summary>method ini digunakan untuk mengambil satu data objek pada scene.</summary>
    Object* getObject(Object* obj);

    /// <summary>method ini digunakan untuk menghapus satu objek pada scene.</summary>
    void Destroy(Object* obj);

    /// <summary>method ini digunakan untuk menambah objek pada scene.</summary>
    void addObject(Object* obj, float x, float y,float z, float scalex,float scaley,float scalez);

    void addObject(Object* obj, float x, float y, float z);

};

