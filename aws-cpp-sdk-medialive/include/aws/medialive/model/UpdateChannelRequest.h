﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/CdiInputSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/EncoderSettings.h>
#include <aws/medialive/model/InputSpecification.h>
#include <aws/medialive/model/LogLevel.h>
#include <aws/medialive/model/MaintenanceUpdateSettings.h>
#include <aws/medialive/model/OutputDestination.h>
#include <aws/medialive/model/InputAttachment.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update a channel.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateChannelRequest : public MediaLiveRequest
  {
  public:
    UpdateChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateChannel"; }

    Aws::String SerializePayload() const override;


    /**
     * Specification of CDI inputs for this channel
     */
    inline const CdiInputSpecification& GetCdiInputSpecification() const{ return m_cdiInputSpecification; }

    /**
     * Specification of CDI inputs for this channel
     */
    inline bool CdiInputSpecificationHasBeenSet() const { return m_cdiInputSpecificationHasBeenSet; }

    /**
     * Specification of CDI inputs for this channel
     */
    inline void SetCdiInputSpecification(const CdiInputSpecification& value) { m_cdiInputSpecificationHasBeenSet = true; m_cdiInputSpecification = value; }

    /**
     * Specification of CDI inputs for this channel
     */
    inline void SetCdiInputSpecification(CdiInputSpecification&& value) { m_cdiInputSpecificationHasBeenSet = true; m_cdiInputSpecification = std::move(value); }

    /**
     * Specification of CDI inputs for this channel
     */
    inline UpdateChannelRequest& WithCdiInputSpecification(const CdiInputSpecification& value) { SetCdiInputSpecification(value); return *this;}

    /**
     * Specification of CDI inputs for this channel
     */
    inline UpdateChannelRequest& WithCdiInputSpecification(CdiInputSpecification&& value) { SetCdiInputSpecification(std::move(value)); return *this;}


    /**
     * channel ID
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * channel ID
     */
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }

    /**
     * channel ID
     */
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }

    /**
     * channel ID
     */
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }

    /**
     * channel ID
     */
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }

    /**
     * channel ID
     */
    inline UpdateChannelRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * channel ID
     */
    inline UpdateChannelRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * channel ID
     */
    inline UpdateChannelRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    /**
     * A list of output destinations for this channel.
     */
    inline const Aws::Vector<OutputDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * A list of output destinations for this channel.
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * A list of output destinations for this channel.
     */
    inline void SetDestinations(const Aws::Vector<OutputDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * A list of output destinations for this channel.
     */
    inline void SetDestinations(Aws::Vector<OutputDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelRequest& WithDestinations(const Aws::Vector<OutputDestination>& value) { SetDestinations(value); return *this;}

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelRequest& WithDestinations(Aws::Vector<OutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelRequest& AddDestinations(const OutputDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * A list of output destinations for this channel.
     */
    inline UpdateChannelRequest& AddDestinations(OutputDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * The encoder settings for this channel.
     */
    inline const EncoderSettings& GetEncoderSettings() const{ return m_encoderSettings; }

    /**
     * The encoder settings for this channel.
     */
    inline bool EncoderSettingsHasBeenSet() const { return m_encoderSettingsHasBeenSet; }

    /**
     * The encoder settings for this channel.
     */
    inline void SetEncoderSettings(const EncoderSettings& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = value; }

    /**
     * The encoder settings for this channel.
     */
    inline void SetEncoderSettings(EncoderSettings&& value) { m_encoderSettingsHasBeenSet = true; m_encoderSettings = std::move(value); }

    /**
     * The encoder settings for this channel.
     */
    inline UpdateChannelRequest& WithEncoderSettings(const EncoderSettings& value) { SetEncoderSettings(value); return *this;}

    /**
     * The encoder settings for this channel.
     */
    inline UpdateChannelRequest& WithEncoderSettings(EncoderSettings&& value) { SetEncoderSettings(std::move(value)); return *this;}


    
    inline const Aws::Vector<InputAttachment>& GetInputAttachments() const{ return m_inputAttachments; }

    
    inline bool InputAttachmentsHasBeenSet() const { return m_inputAttachmentsHasBeenSet; }

    
    inline void SetInputAttachments(const Aws::Vector<InputAttachment>& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = value; }

    
    inline void SetInputAttachments(Aws::Vector<InputAttachment>&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments = std::move(value); }

    
    inline UpdateChannelRequest& WithInputAttachments(const Aws::Vector<InputAttachment>& value) { SetInputAttachments(value); return *this;}

    
    inline UpdateChannelRequest& WithInputAttachments(Aws::Vector<InputAttachment>&& value) { SetInputAttachments(std::move(value)); return *this;}

    
    inline UpdateChannelRequest& AddInputAttachments(const InputAttachment& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(value); return *this; }

    
    inline UpdateChannelRequest& AddInputAttachments(InputAttachment&& value) { m_inputAttachmentsHasBeenSet = true; m_inputAttachments.push_back(std::move(value)); return *this; }


    /**
     * Specification of network and file inputs for this channel
     */
    inline const InputSpecification& GetInputSpecification() const{ return m_inputSpecification; }

    /**
     * Specification of network and file inputs for this channel
     */
    inline bool InputSpecificationHasBeenSet() const { return m_inputSpecificationHasBeenSet; }

    /**
     * Specification of network and file inputs for this channel
     */
    inline void SetInputSpecification(const InputSpecification& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = value; }

    /**
     * Specification of network and file inputs for this channel
     */
    inline void SetInputSpecification(InputSpecification&& value) { m_inputSpecificationHasBeenSet = true; m_inputSpecification = std::move(value); }

    /**
     * Specification of network and file inputs for this channel
     */
    inline UpdateChannelRequest& WithInputSpecification(const InputSpecification& value) { SetInputSpecification(value); return *this;}

    /**
     * Specification of network and file inputs for this channel
     */
    inline UpdateChannelRequest& WithInputSpecification(InputSpecification&& value) { SetInputSpecification(std::move(value)); return *this;}


    /**
     * The log level to write to CloudWatch Logs.
     */
    inline const LogLevel& GetLogLevel() const{ return m_logLevel; }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline bool LogLevelHasBeenSet() const { return m_logLevelHasBeenSet; }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline void SetLogLevel(const LogLevel& value) { m_logLevelHasBeenSet = true; m_logLevel = value; }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline void SetLogLevel(LogLevel&& value) { m_logLevelHasBeenSet = true; m_logLevel = std::move(value); }

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline UpdateChannelRequest& WithLogLevel(const LogLevel& value) { SetLogLevel(value); return *this;}

    /**
     * The log level to write to CloudWatch Logs.
     */
    inline UpdateChannelRequest& WithLogLevel(LogLevel&& value) { SetLogLevel(std::move(value)); return *this;}


    /**
     * Maintenance settings for this channel.
     */
    inline const MaintenanceUpdateSettings& GetMaintenance() const{ return m_maintenance; }

    /**
     * Maintenance settings for this channel.
     */
    inline bool MaintenanceHasBeenSet() const { return m_maintenanceHasBeenSet; }

    /**
     * Maintenance settings for this channel.
     */
    inline void SetMaintenance(const MaintenanceUpdateSettings& value) { m_maintenanceHasBeenSet = true; m_maintenance = value; }

    /**
     * Maintenance settings for this channel.
     */
    inline void SetMaintenance(MaintenanceUpdateSettings&& value) { m_maintenanceHasBeenSet = true; m_maintenance = std::move(value); }

    /**
     * Maintenance settings for this channel.
     */
    inline UpdateChannelRequest& WithMaintenance(const MaintenanceUpdateSettings& value) { SetMaintenance(value); return *this;}

    /**
     * Maintenance settings for this channel.
     */
    inline UpdateChannelRequest& WithMaintenance(MaintenanceUpdateSettings&& value) { SetMaintenance(std::move(value)); return *this;}


    /**
     * The name of the channel.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the channel.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the channel.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the channel.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the channel.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the channel.
     */
    inline UpdateChannelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the channel.
     */
    inline UpdateChannelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the channel.
     */
    inline UpdateChannelRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline UpdateChannelRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline UpdateChannelRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * An optional Amazon Resource Name (ARN) of the role to assume when running the
     * Channel. If you do not specify this on an update call but the role was
     * previously set that role will be removed.
     */
    inline UpdateChannelRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    CdiInputSpecification m_cdiInputSpecification;
    bool m_cdiInputSpecificationHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::Vector<OutputDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    EncoderSettings m_encoderSettings;
    bool m_encoderSettingsHasBeenSet = false;

    Aws::Vector<InputAttachment> m_inputAttachments;
    bool m_inputAttachmentsHasBeenSet = false;

    InputSpecification m_inputSpecification;
    bool m_inputSpecificationHasBeenSet = false;

    LogLevel m_logLevel;
    bool m_logLevelHasBeenSet = false;

    MaintenanceUpdateSettings m_maintenance;
    bool m_maintenanceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
