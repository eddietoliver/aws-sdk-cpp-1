# Breaking changes in AWS SDK for C++

## [1.10.0]
This release introduces a new endpoint resolution based on client configuration and request input parameters. Endpoint Discovery and ARN Resource APIs are deprecated.

## [1.9.0](https://github.com/aws/aws-sdk-cpp/tree/1.9.0) (2021-04-19)
This release introduces a new Amazon S3 client, providing high throughput for Amazon S3 GET and PUT operations. The all new S3 Client is implemented on the top of the AWS Common Runtime (CRT) libraries, and is aptly named the "S3 CRT client". Lastly, there are also configuration updates related to Endpoint Discovery.

## [1.8.0](https://github.com/aws/aws-sdk-cpp/tree/1.8.0) (2020-06-30)
Check our [Wiki](https://github.com/aws/aws-sdk-cpp/wiki/What’s-New-in-AWS-SDK-for-CPP-Version-1.8) for a comprehensive list of the featuers introduced on this version.

## [1.7.0](https://github.com/aws/aws-sdk-cpp/tree/1.7.0) (2018-11-15)

### aws-cpp-sdk-core
Add new dependencies: [aws-c-common](https://github.com/awslabs/aws-c-common), [aws-checksums](https://github.com/awslabs/aws-checksums) and [aws-c-event-stream](https://github.com/awslabs/aws-c-event-stream) to support S3 select streaming API. The API is implemented in C99 via libraries that are developed by AWS as well.

These libraries are downloaded and built as part of the CMake configure step. That can be disabled via the new switch `-DBUILD_DEPS=OFF`. The switch is set to ON by default.

### aws-cpp-sdk-s3
Add support for S3 `SelectContentObject` API.

## [1.6.0](https://github.com/aws/aws-sdk-cpp/tree/1.6.0) (2018-08-28)

### aws-cpp-sdk-core

Code for future SDK instrumentation and telemetry

## [1.5.0](https://github.com/aws/aws-sdk-cpp/tree/1.5.0) (2018-07-25)

### aws-cpp-sdk-core

`cJSON` is now the underlying JSON parser, replacing JsonCpp.

`JsonValue` is now strictly a DOM manipulation class. All reads and serialization must be done through the new
`JsonView` class. The `JsonView` is lightweight and follows the `string_view` concept from C++17 such that, it does not
extend the lifetime of its underlying DOM (the `JsonValue`).

## [1.4.0](https://github.com/aws/aws-sdk-cpp/tree/1.4.0) (2018-02-19)

### aws-cpp-sdk-s3

Fixed bug in Aws::S3::Model::CopyObjectResult, added CopyObjectResultDetails as a member of CopyObjectResult.

We were missing a member of CopyObjectResult because of name conflict and related files are overwritten when we generate the source code.

We renamed this member to CopyObjectResultDetails.

### aws-cpp-sdk-config

Removed unused enum values.

From the service release notes:
> AWS Config updated the ConfigurationItemStatus enum values. The values prior to this update did not represent appropriate values returned by GetResourceConfigHistory. You must update your code to enumerate the new enum values so this is a breaking change. To map old properties to new properties, use the following descriptions: New discovered resource - Old property: Discovered, New property: ResourceDiscovered. Updated resource - Old property: Ok, New property: OK. Deleted resource - Old property: Deleted, New property: ResourceDeleted or ResourceDeletedNotRecorded. Not-recorded resource - Old property: N/A, New property: ResourceNotRecorded or ResourceDeletedNotRecorded.


## [1.3.0](https://github.com/aws/aws-sdk-cpp/tree/1.3.0) (2017-11-09)

### aws-cpp-sdk-s3

Changed the constructor of AWSAuthV4Signer to use PayloadSigningPolicy instead of a boolean.


## [1.2.0](https://github.com/aws/aws-sdk-cpp/tree/1.2.0) (2017-09-24)

### aws-cpp-sdk-transfer

Changed ownership of thread executor in TransferManager.


## [1.1.1](https://github.com/aws/aws-sdk-cpp/tree/1.1.1) (2017-06-22)

### aws-cpp-sdk-transfer

Introduced a builder function to instantiate TransferManager
as a shared_ptr. That ensures that other threads can increase
TransferManager's lifetime until all the callbacks have finished.
