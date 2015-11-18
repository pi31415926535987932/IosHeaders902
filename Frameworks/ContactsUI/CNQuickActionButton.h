/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:44:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIButton.h>

@class CNQuickAction;

@interface CNQuickActionButton : UIButton {

	CNQuickAction* _action;

}

@property (nonatomic,retain) CNQuickAction * action;              //@synthesize action=_action - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CNQuickAction *)action;
-(void)setAction:(CNQuickAction *)arg1 ;
-(void)performAction;
@end

