/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSExtension;

@interface UIActivity : NSObject {

	int _defaultPriority;
	/*^block*/id _activityCompletionHandler;
	/*^block*/id _activityCompletionWithItemsHandler;

}

@property (nonatomic,readonly) NSExtension * applicationExtension; 
@property (nonatomic,copy) id activityCompletionHandler;                        //@synthesize activityCompletionHandler=_activityCompletionHandler - In the implementation block
@property (nonatomic,copy) id activityCompletionWithItemsHandler;               //@synthesize activityCompletionWithItemsHandler=_activityCompletionWithItemsHandler - In the implementation block
+(id)_activityImageForApplication:(id)arg1 ;
+(id)_activitySettingsImageForApplication:(id)arg1 ;
+(int)activityCategory;
+(id)_activityFunctionImage:(id)arg1 ;
+(id)_activityGenericImage:(id)arg1 ;
-(id)activityType;
-(void)_cleanup;
-(void)activityDidFinish:(char)arg1 ;
-(void)activityDidFinish:(char)arg1 items:(id)arg2 error:(id)arg3 ;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(CGSize)_thumbnailSize;
-(NSExtension *)applicationExtension;
-(id)activityImage;
-(id)activityViewController;
-(void)_injectedJavaScriptResult:(id)arg1 ;
-(char)_canBeExcludedByActivityViewController:(id)arg1 ;
-(char)_presentActivityOnViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)_dismissActivityFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)activityCompletionHandler;
-(void)setActivityCompletionHandler:(id)arg1 ;
-(id)activityCompletionWithItemsHandler;
-(void)setActivityCompletionWithItemsHandler:(id)arg1 ;
-(id)activitySettingsImage;
-(char)_canPerformWithSuppliedActivityItems:(id)arg1 ;
-(id)_beforeActivity;
-(void)_setActivityCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setActivityCompletionWithItemsHandler:(/*^block*/id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)_willPresentAsFormSheet;
-(void)_setSubject:(id)arg1 ;
-(id)_subjectForActivityItem:(id)arg1 ;
-(id)_dataTypeIdentifierForActivityItem:(id)arg1 ;
-(id)_thumbnailImageForActivityItem:(id)arg1 ;
-(id)_attachmentNameForActivityItem:(id)arg1 ;
@end

