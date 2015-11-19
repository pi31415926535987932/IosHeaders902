/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding> {

	int _taskType;
	int _retryCount;

}

@property (assign,nonatomic) int taskType;                //@synthesize taskType=_taskType - In the implementation block
@property (assign,nonatomic) int retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
+(char)supportsSecureCoding;
+(id)taskWithType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(int)taskType;
-(void)setTaskType:(int)arg1 ;
@end

