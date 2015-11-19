/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:35 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {

	NSURL* _draftMessageIdentifier;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)message;
-(id)createResponse;
-(id)_initWithDraftMessageIdentifier:(id)arg1 ;
-(id)draftMessageIdentifier;
-(id)createUsageResult;
@end

