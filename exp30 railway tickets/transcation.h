
#ifndef TRANSCATION_H
#define TRANSCATION_H

#include <string>

/**
  * class transcation
  * 
  */

class transcation
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  transcation ();

  /**
   * Empty Destructor
   */
  virtual ~transcation ();

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

  void _id;
  void _name;
  void _amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _id
   * @param new_var the new value of _id
   */
  void set_id (void new_var)   {
      _id = new_var;
  }

  /**
   * Get the value of _id
   * @return the value of _id
   */
  void get_id ()   {
    return _id;
  }

  /**
   * Set the value of _name
   * @param new_var the new value of _name
   */
  void set_name (void new_var)   {
      _name = new_var;
  }

  /**
   * Get the value of _name
   * @return the value of _name
   */
  void get_name ()   {
    return _name;
  }

  /**
   * Set the value of _amount
   * @param new_var the new value of _amount
   */
  void set_amount (void new_var)   {
      _amount = new_var;
  }

  /**
   * Get the value of _amount
   * @return the value of _amount
   */
  void get_amount ()   {
    return _amount;
  }
private:


  void initAttributes () ;

};

#endif // TRANSCATION_H
