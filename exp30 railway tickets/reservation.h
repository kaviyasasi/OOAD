
#ifndef RESERVATION_H
#define RESERVATION_H

#include <string>

/**
  * class reservation
  * 
  */

class reservation
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  reservation ();

  /**
   * Empty Destructor
   */
  virtual ~reservation ();

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
  void _check_up ()
  {
  }


  /**
   */
  void _add ()
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

  void _pass_seat_no;
  void _confirmation;
  void _verification;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _pass_seat_no
   * @param new_var the new value of _pass_seat_no
   */
  void set_pass_seat_no (void new_var)   {
      _pass_seat_no = new_var;
  }

  /**
   * Get the value of _pass_seat_no
   * @return the value of _pass_seat_no
   */
  void get_pass_seat_no ()   {
    return _pass_seat_no;
  }

  /**
   * Set the value of _confirmation
   * @param new_var the new value of _confirmation
   */
  void set_confirmation (void new_var)   {
      _confirmation = new_var;
  }

  /**
   * Get the value of _confirmation
   * @return the value of _confirmation
   */
  void get_confirmation ()   {
    return _confirmation;
  }

  /**
   * Set the value of _verification
   * @param new_var the new value of _verification
   */
  void set_verification (void new_var)   {
      _verification = new_var;
  }

  /**
   * Get the value of _verification
   * @return the value of _verification
   */
  void get_verification ()   {
    return _verification;
  }
private:


  void initAttributes () ;

};

#endif // RESERVATION_H
