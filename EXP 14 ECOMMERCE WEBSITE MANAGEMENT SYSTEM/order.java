

/**
 * Class order
 */
public class order {

  //
  // Fields
  //

  private int order_id;
  private String username;
  private void shippingAddress;
  private void phone_number;
  
  //
  // Constructors
  //
  public order () { };
  
  //
  // Methods
  //


  //
  // Accessor methods
  //

  /**
   * Set the value of order_id
   * @param newVar the new value of order_id
   */
  private void setOrder_id (int newVar) {
    order_id = newVar;
  }

  /**
   * Get the value of order_id
   * @return the value of order_id
   */
  private int getOrder_id () {
    return order_id;
  }

  /**
   * Set the value of username
   * @param newVar the new value of username
   */
  private void setUsername (String newVar) {
    username = newVar;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  private String getUsername () {
    return username;
  }

  /**
   * Set the value of shippingAddress
   * @param newVar the new value of shippingAddress
   */
  private void setShippingAddress (void newVar) {
    shippingAddress = newVar;
  }

  /**
   * Get the value of shippingAddress
   * @return the value of shippingAddress
   */
  private void getShippingAddress () {
    return shippingAddress;
  }

  /**
   * Set the value of phone_number
   * @param newVar the new value of phone_number
   */
  private void setPhone_number (void newVar) {
    phone_number = newVar;
  }

  /**
   * Get the value of phone_number
   * @return the value of phone_number
   */
  private void getPhone_number () {
    return phone_number;
  }

  //
  // Other methods
  //

  /**
   */
  public void deliveryStatus()
  {
  }


  /**
   */
  public void updateOrder()
  {
  }


}
