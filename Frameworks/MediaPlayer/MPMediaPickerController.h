/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPMediaPickerControllerDelegate;
@class _UIAsyncInvocation, MPRemoteMediaPickerController, NSString;

@interface MPMediaPickerController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	id _modalContext;
	MPRemoteMediaPickerController* _remoteViewController;
	char _allowsPickingMultipleItems;
	char _showsCloudItems;
	unsigned _mediaTypes;
	id<MPMediaPickerControllerDelegate> _delegate;
	NSString* _prompt;

}

@property (nonatomic,readonly) unsigned mediaTypes;                                            //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic,__weak) id<MPMediaPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char allowsPickingMultipleItems; 
@property (assign,nonatomic) char showsCloudItems; 
@property (nonatomic,copy) NSString * prompt;                                                  //@synthesize prompt=_prompt - In the implementation block
+(void)preheatMediaPicker;
-(void)_requestRemoteViewController;
-(void)_sendSettingsToService;
-(void)_pickerDidPickItems:(id)arg1 ;
-(void)_pickerDidCancel;
-(char)_hasAddedRemoteView;
-(id)_serviceViewControllerProxy;
-(void)_forceDismissal;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(char)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(char)arg1 ;
-(char)showsCloudItems;
-(void)_resetRemoteViewController;
-(id)initWithMediaTypes:(unsigned)arg1 ;
-(void)setShowsCloudItems:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MPMediaPickerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MPMediaPickerControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(unsigned)mediaTypes;
-(void)_addRemoteView;
@end

