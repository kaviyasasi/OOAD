
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

/**
  * class payment
  * 
  */

class payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment ();

  /**
   * Empty Destructor
   */
  virtual ~payment ();

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
  void _update ()
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

  void _online_mode_;
  void _offline_ode;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _online_mode_
   * @param new_var the new value of _online_mode_
   */
  void set_online_mode_ (void new_var)   {
      _online_mode_ = new_var;
  }

  /**
   * Get the value of _online_mode_
   * @return the value of _online_mode_
   */
  void get_online_mode_ ()   {
    return _online_mode_;
  }

  /**
   * Set the value of _offline_ode
   * @param new_var the new value of _offline_ode
   */
  void set_offline_ode (void new_var)   {
      _offline_ode = new_var;
  }

  /**
   * Get the value of _offline_ode
   * @return the value of _offline_ode
   */
  void get_offline_ode ()   {
    return _offline_ode;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
