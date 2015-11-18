/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:33 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	unsigned playerViewControllerWillStartPictureInPicture : 1;
	unsigned playerViewControllerDidStartPictureInPicture : 1;
	unsigned playerViewController_failedToStartPictureInPictureWithError : 1;
	unsigned playerViewControllerWillStopPictureInPicture : 1;
	unsigned playerViewControllerDidStopPictureInPicture : 1;
	unsigned playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart : 1;
	unsigned playerViewController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1;
	unsigned playerViewController_shouldExitFullScreenWithReason : 1;
} SCD_Struct_AV5;

typedef struct {
	unsigned pictureInPictureViewControllerViewDidAppear : 1;
	unsigned pictureInPictureViewControllerViewWillDisappear : 1;
} SCD_Struct_AV6;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_AV7;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV8;

typedef struct {
	unsigned pictureInPictureControllerWillStartPictureInPicture : 1;
	unsigned pictureInPictureControllerDidStartPictureInPicture : 1;
	unsigned pictureInPictureController_failedToStartPictureInPictureWithError : 1;
	unsigned pictureInPictureControllerWillStopPictureInPicture : 1;
	unsigned pictureInPictureControllerDidStopPictureInPicture : 1;
	unsigned pictureInPictureController_restoreUserInterfaceForPictureInPictureStopWithCompletionHandler : 1;
} SCD_Struct_AV9;

