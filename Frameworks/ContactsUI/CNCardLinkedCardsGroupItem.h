/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/CNCardGroupItem.h>

@class CNContact;

@interface CNCardLinkedCardsGroupItem : CNCardGroupItem {

	CNContact* _contact;

}

@property (nonatomic,retain) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
@end

