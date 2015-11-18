/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class UIDocumentInteractionController;

@interface _UIDelegatingActionActivity : UIActivity {

	UIDocumentInteractionController* _documentInteractionController;
	SEL _action;

}
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)initWithDocumentInteractionController:(id)arg1 forAction:(SEL)arg2 ;
@end
