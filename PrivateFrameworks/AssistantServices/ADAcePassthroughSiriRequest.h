/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class SABaseClientBoundCommand;

@interface ADAcePassthroughSiriRequest : AFSiriRequest {

	SABaseClientBoundCommand* _clientBoundCommand;

}
+(char)supportsSecureCoding;
-(void)_ad_handleAceDomainSignalRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createResponseWithReplyCommand:(id)arg1 ;
-(id)clientBoundCommand;
-(id)initWithClientBoundCommand:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

