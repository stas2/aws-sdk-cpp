/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CustomerGateway.h>
#include <aws/ec2/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of CreateCustomerGateway.</p>
   */
  class AWS_EC2_API CreateCustomerGatewayResponse
  {
  public:
    CreateCustomerGatewayResponse();
    CreateCustomerGatewayResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateCustomerGatewayResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline const CustomerGateway& GetCustomerGateway() const{ return m_customerGateway; }

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline void SetCustomerGateway(const CustomerGateway& value) { m_customerGateway = value; }

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline void SetCustomerGateway(CustomerGateway&& value) { m_customerGateway = value; }

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline CreateCustomerGatewayResponse& WithCustomerGateway(const CustomerGateway& value) { SetCustomerGateway(value); return *this;}

    /**
     * <p>Information about the customer gateway.</p>
     */
    inline CreateCustomerGatewayResponse& WithCustomerGateway(CustomerGateway&& value) { SetCustomerGateway(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateCustomerGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateCustomerGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    CustomerGateway m_customerGateway;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws