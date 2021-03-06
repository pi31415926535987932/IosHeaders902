/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress;

@interface STCall : STSiriModelObject {

	int _service;
	STContactAddress* _initiatorAddress;
	STContactAddress* _recipientAddress;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_aceContextObjectValue;
-(id)initiatorAddress;
-(void)setInitiatorAddress:(id)arg1 ;
-(id)recipientAddress;
-(void)setRecipientAddress:(id)arg1 ;
-(int)service;
-(void)setService:(int)arg1 ;
@end

