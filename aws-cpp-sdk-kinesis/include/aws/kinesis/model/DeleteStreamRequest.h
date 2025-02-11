﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <a>DeleteStream</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DeleteStreamInput">AWS
   * API Reference</a></p>
   */
  class AWS_KINESIS_API DeleteStreamRequest : public KinesisRequest
  {
  public:
    DeleteStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStream"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stream to delete.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline DeleteStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline DeleteStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the stream to delete.</p>
     */
    inline DeleteStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}


    /**
     * <p>If this parameter is unset (<code>null</code>) or if you set it to
     * <code>false</code>, and the stream has registered consumers, the call to
     * <code>DeleteStream</code> fails with a <code>ResourceInUseException</code>. </p>
     */
    inline bool GetEnforceConsumerDeletion() const{ return m_enforceConsumerDeletion; }

    /**
     * <p>If this parameter is unset (<code>null</code>) or if you set it to
     * <code>false</code>, and the stream has registered consumers, the call to
     * <code>DeleteStream</code> fails with a <code>ResourceInUseException</code>. </p>
     */
    inline bool EnforceConsumerDeletionHasBeenSet() const { return m_enforceConsumerDeletionHasBeenSet; }

    /**
     * <p>If this parameter is unset (<code>null</code>) or if you set it to
     * <code>false</code>, and the stream has registered consumers, the call to
     * <code>DeleteStream</code> fails with a <code>ResourceInUseException</code>. </p>
     */
    inline void SetEnforceConsumerDeletion(bool value) { m_enforceConsumerDeletionHasBeenSet = true; m_enforceConsumerDeletion = value; }

    /**
     * <p>If this parameter is unset (<code>null</code>) or if you set it to
     * <code>false</code>, and the stream has registered consumers, the call to
     * <code>DeleteStream</code> fails with a <code>ResourceInUseException</code>. </p>
     */
    inline DeleteStreamRequest& WithEnforceConsumerDeletion(bool value) { SetEnforceConsumerDeletion(value); return *this;}

  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    bool m_enforceConsumerDeletion;
    bool m_enforceConsumerDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
