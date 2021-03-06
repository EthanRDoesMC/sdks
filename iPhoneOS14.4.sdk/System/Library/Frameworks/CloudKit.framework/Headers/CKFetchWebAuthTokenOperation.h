//
//  CKFetchWebAuthTokenOperation.h
//  CloudKit
//
//  Copyright © 2014 Apple Inc. All rights reserved.
//

#import <CloudKit/CKDatabaseOperation.h>

NS_ASSUME_NONNULL_BEGIN

/*! @class CKFetchWebAuthTokenOperation
 *
 *  @abstract This operation will fetch a web auth token given an API token obtained from the CloudKit Dashboard for your container
 */
API_AVAILABLE(macos(10.11), ios(9.2), tvos(9.1), watchos(3.0))
@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithAPIToken:(NSString *)APIToken;

/*! APIToken is expected to be set before you begin this operation. */
@property (nonatomic, copy, nullable) NSString *APIToken;

//! @discussion Each @c CKOperation instance has a private serial queue. This queue is used for all callback block invocations.
@property (nonatomic, copy, nullable) void (^fetchWebAuthTokenCompletionBlock)(NSString * _Nullable webAuthToken, NSError * _Nullable operationError);

@end

NS_ASSUME_NONNULL_END
