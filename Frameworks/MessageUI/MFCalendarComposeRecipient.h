/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {

	NSString* _calAttendeeName;
	id _participant;

}

@property (nonatomic,retain) id participant; 
-(id)participant;
-(void)setCalAttendeeName:(id)arg1 ;
-(void)setParticipant:(id)arg1 ;
-(id)initWithComposeRecipient:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)displayString;
@end

