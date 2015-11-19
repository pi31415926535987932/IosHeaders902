/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLVideoViewDelegate.h>
#import <libobjc.A.dylib/PLImageLoadingQueueDelegate.h>
#import <libobjc.A.dylib/PLPhotoTileViewControllerDelegate.h>

@class PLManagedAsset, UIImage, PLCropOverlay, PLPhotoTileViewController, PLVideoView, PLVideoRemaker, NSURL, PLImageCache, PLImageLoadingQueue, PLImageSource, NSString;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate> {

	PLManagedAsset* _photo;
	CGImageRef _imageRef;
	UIImage* _image;
	CGRect _cropRect;
	PLCropOverlay* _cropOverlay;
	PLPhotoTileViewController* _imageTile;
	PLVideoView* _videoView;
	PLVideoRemaker* _remaker;
	NSURL* _videoURL;
	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	PLImageSource* _imageSource;
	int _previousStatusBarStyle;
	int _newStatusBarStyle;
	unsigned _allowEditing : 1;
	unsigned _statusBarWasHidden : 1;
	unsigned _isVideo : 1;
	unsigned _isDisappearing : 1;
	unsigned _remaking : 1;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhoto:(id)arg1 ;
-(void)_enableCropOverlayIfNecessary;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(int)_imagePickerStatusBarStyle;
-(void)_removedAsTopViewController;
-(id)initWithImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)initWithUIImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(char)_displaysFullScreen;
-(void)setAllowsEditing:(char)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 didAppear:(char)arg2 ;
-(void)photoTileViewController:(id)arg1 willAppear:(char)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(char)arg2 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(char)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2 ;
-(char)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(char)arg2 ;
-(char)videoViewCanCreateMetadata:(id)arg1 ;
-(char)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayPlay:(id)arg1 ;
-(void)cropOverlayPause:(id)arg1 ;
-(id)useButtonTitle;
-(int)cropOverlayMode;
-(CGRect)_viewFrame;
-(CGRect)previewFrame;
-(Class)_viewClass;
-(unsigned)_contentAutoresizingMask;
-(void)setupNavigationItem;
-(unsigned)_tileAutoresizingMask;
-(char)clientIsWallpaper;
-(void)_updateGestureSettings;
-(char)wantsStatusBarVisible;
-(int)desiredStatusBarAnimation;
-(void)_editabilityChanged:(id)arg1 ;
-(void)didChooseVideoAtURL:(id)arg1 options:(id)arg2 ;
-(void)attachScrubberPalette;
-(id)_trimMessage;
-(id)initWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
-(id)initWithVideoURL:(id)arg1 ;
-(id)cropOverlay;
-(void)setCropOverlayDone;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3 ;
-(void)videoViewDidPausePlayback:(id)arg1 didFinish:(char)arg2 ;
-(int)imageFormat;
-(void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4 ;
@end

