/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLUIImageViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSDictionary, UIImagePickerController, UINavigationItem, NSString;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	NSDictionary* _options;
	UIImagePickerController* _imagePicker;
	UINavigationItem* _navItem;
	id _delegate;
	Class _viewClass;
	unsigned _canCreateMetadata;
	char _parentInPopoverException;

}

@property (assign,nonatomic) char parentInPopoverException;              //@synthesize parentInPopoverException=_parentInPopoverException - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)uiipc_imagePickerController;
-(id)initWithPhoto:(id)arg1 trimTitle:(id)arg2 ;
-(id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2 ;
-(void)setParentInPopoverException:(char)arg1 ;
-(void)setImagePickerOptions:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(id)navigationItem;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(char)_displaysFullScreen;
-(id)initWithProperties:(id)arg1 ;
-(float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2 ;
-(void)videoViewPlaybackDidFail:(id)arg1 ;
-(char)videoViewCanCreateMetadata:(id)arg1 ;
-(int)cropOverlayMode;
-(CGRect)previewFrame;
-(Class)_viewClass;
-(id)uiipc_imagePickerOptions;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(id)_trimMessage;
-(char)_editingForThirdParty;
-(void)_cancelTrim:(id)arg1 ;
-(void)_trimVideo:(id)arg1 ;
-(void)_setupNavigationItemAndTrimTitle:(id)arg1 ;
-(char)parentInPopoverException;
-(void)setViewClass:(Class)arg1 ;
@end

