/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class STContactAddress, NSArray, NSString, NSURL, NSDate;

@interface STSiriMessage : STSiriModelObject {

	char _outbound;
	STContactAddress* _senderAddress;
	NSArray* _recipientAddresses;
	NSString* _subjectText;
	NSString* _bodyText;
	NSURL* _attachmentURL;
	NSDate* _sendDate;
	NSString* _chatIdentifier;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setBodyText:(id)arg1 ;
-(id)bodyText;
-(id)_aceContextObjectValue;
-(char)isOutbound;
-(id)subjectText;
-(id)senderAddress;
-(void)setOutbound:(char)arg1 ;
-(void)setSenderAddress:(id)arg1 ;
-(void)setSubjectText:(id)arg1 ;
-(id)attachmentURL;
-(void)setAttachmentURL:(id)arg1 ;
-(id)chatIdentifier;
-(void)setChatIdentifier:(id)arg1 ;
-(id)recipientAddresses;
-(void)setRecipientAddresses:(id)arg1 ;
-(void)setSendDate:(id)arg1 ;
-(id)sendDate;
@end

