﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class AWS_IDENTITYSTORE_API DescribeGroupRequest : public IdentityStoreRequest
  {
  public:
    DescribeGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline DescribeGroupRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline DescribeGroupRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains numbers
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline DescribeGroupRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline DescribeGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
