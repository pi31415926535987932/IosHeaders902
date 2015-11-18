/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:27 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>
#import <UIKit/UIActivityViewControllerDelegate.h>

@protocol MKActivityViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKActivityViewController : UIActivityViewController <UIActivityViewControllerDelegate> {

	MKMapItem* _mapItem;
	id<MKActivityViewControllerDelegate> _activityControllerDelegate;

}

@property (assign,nonatomic,__weak) id<MKActivityViewControllerDelegate> activityControllerDelegate;              //@synthesize activityControllerDelegate=_activityControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 activityProviderDelegate:(id)arg4 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned)arg3 applicationActivities:(id)arg4 ;
-(id<MKActivityViewControllerDelegate>)activityControllerDelegate;
-(void)setActivityControllerDelegate:(id<MKActivityViewControllerDelegate>)arg1 ;
-(/*^block*/id)_activityHandler;
-(id)initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned)arg3 applicationActivities:(id)arg4 routeProviderDelegate:(id)arg5 ;
-(id)initWithMapItem:(id)arg1 contact:(id)arg2 applicationActivities:(id)arg3 ;
-(/*^block*/id)_completionHandler;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg1 ;
@end

