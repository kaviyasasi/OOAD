
#ifndef RAILWAY_TICKETS_H
#define RAILWAY_TICKETS_H

#include <string>

/**
  * class railway_tickets
  * 
  */

class railway_tickets
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  railway_tickets ();

  /**
   * Empty Destructor
   */
  virtual ~railway_tickets ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void _add ()
  {
  }


  /**
   */
  void update ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void _seat_no;
  void _date;
  void _time;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _seat_no
   * @param new_var the new value of _seat_no
   */
  void set_seat_no (void new_var)   {
      _seat_no = new_var;
  }

  /**
   * Get the value of _seat_no
   * @return the value of _seat_no
   */
  void get_seat_no ()   {
    return _seat_no;
  }

  /**
   * Set the value of _date
   * @param new_var the new value of _date
   */
  void set_date (void new_var)   {
      _date = new_var;
  }

  /**
   * Get the value of _date
   * @return the value of _date
   */
  void get_date ()   {
    return _date;
  }

  /**
   * Set the value of _time
   * @param new_var the new value of _time
   */
  void set_time (void new_var)   {
      _time = new_var;
  }

  /**
   * Get the value of _time
   * @return the value of _time
   */
  void get_time ()   {
    return _time;
  }
private:


  void initAttributes () ;

};

#endif // RAILWAY_TICKETS_H
