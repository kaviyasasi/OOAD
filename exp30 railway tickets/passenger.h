
#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

/**
  * class passenger
  * 
  */

class passenger
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  passenger ();

  /**
   * Empty Destructor
   */
  virtual ~passenger ();

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

  void _name;
  void _id;
  void _details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of _details
   * @param new_var the new value of _details
   */
  void set_details (void new_var)   {
      _details = new_var;
  }

  /**
   * Get the value of _details
   * @return the value of _details
   */
  void get_details ()   {
    return _details;
  }
private:


  void initAttributes () ;

};

#endif // PASSENGER_H
