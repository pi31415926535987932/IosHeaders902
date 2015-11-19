/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/DDRemoteActionViewService.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@protocol DDRemoteActionPresenter;
@class DDAction, CNContactViewController, NSString;

@interface DDAddToContactsViewController : UINavigationController <DDRemoteActionViewService, CNContactViewControllerDelegate> {

	id<DDRemoteActionPresenter> _proxy;
	DDAction* _action;
	CNContactViewController* _personViewController;

}

@property (retain) DDAction * action;                               //@synthesize action=_action - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)alternateNameForContact:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)cancelPressed:(id)arg1 ;
-(void)dealloc;
-(DDAction *)action;
-(void)setAction:(DDAction *)arg1 ;
-(void)adaptForPresentationInPopover:(char)arg1 ;
-(void)prepareForAction:(id)arg1 ;
-(void)_augmentRecord:(void*)arg1 withResultsFromAction:(id)arg2 ;
-(void)setCancelButtonVisible:(char)arg1 ;
-(void)doneWithAddingContact;
@end

