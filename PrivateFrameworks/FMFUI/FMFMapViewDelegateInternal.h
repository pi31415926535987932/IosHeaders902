/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol FMFMapViewDelegateInternalDelegate;
@class FMFWildcardGestureRecognizer, FMAnnotationView, MKMapView, NSString;

@interface FMFMapViewDelegateInternal : NSObject <UIGestureRecognizerDelegate, MKMapViewDelegate> {

	char _isMapCenteringDisabled;
	char _respondingToUserTouch;
	id<FMFMapViewDelegateInternalDelegate> _delegate;
	FMFWildcardGestureRecognizer* _gr;
	FMAnnotationView* _selectedAnnotationView;
	MKMapView* _mapView;
	SCD_Struct_FM4 _lastUserLocationCoordinate;

}

@property (assign,nonatomic) char isMapCenteringDisabled;                                         //@synthesize isMapCenteringDisabled=_isMapCenteringDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<FMFMapViewDelegateInternalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char respondingToUserTouch;                                          //@synthesize respondingToUserTouch=_respondingToUserTouch - In the implementation block
@property (nonatomic,retain) FMFWildcardGestureRecognizer * gr;                                   //@synthesize gr=_gr - In the implementation block
@property (assign,nonatomic) FMAnnotationView * selectedAnnotationView;                           //@synthesize selectedAnnotationView=_selectedAnnotationView - In the implementation block
@property (assign,nonatomic) MKMapView * mapView;                                                 //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) SCD_Struct_FM4 lastUserLocationCoordinate;                           //@synthesize lastUserLocationCoordinate=_lastUserLocationCoordinate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(MKMapView *)mapView;
-(void)setDelegate:(id<FMFMapViewDelegateInternalDelegate>)arg1 ;
-(id<FMFMapViewDelegateInternalDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)canSelectAnnotation:(id)arg1 ;
-(void)setIsMapCenteringDisabled:(char)arg1 ;
-(void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(char)arg2 disallowAnimation:(char)arg3 ;
-(id)initWithDelegate:(id)arg1 mapView:(id)arg2 ;
-(char)isMapCenteringDisabled;
-(void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2 ;
-(void)selectAnnotation:(id)arg1 ;
-(void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2 ;
-(void)setGr:(FMFWildcardGestureRecognizer *)arg1 ;
-(void)setRespondingToUserTouch:(char)arg1 ;
-(void)endTouches;
-(id)accuracyCircleForLocation:(id)arg1 ;
-(void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2 ;
-(FMAnnotationView *)selectedAnnotationView;
-(void)setSelectedAnnotationView:(FMAnnotationView *)arg1 ;
-(char)respondingToUserTouch;
-(void)setLastUserLocationCoordinate:(SCD_Struct_FM4)arg1 ;
-(id)fmfOverlayColorSatellite;
-(id)fmfOverlayColor;
-(void)_moveCenterByOffset:(CGPoint)arg1 from:(SCD_Struct_FM4)arg2 mapView:(id)arg3 ;
-(char)regionIsValid:(SCD_Struct_FM5)arg1 ;
-(UIEdgeInsets)edgeInsetsWithMinApplied:(UIEdgeInsets)arg1 ;
-(SCD_Struct_FM5)mapRectMakeWithRadialDistanceForCoordinate:(SCD_Struct_FM4)arg1 andRadius:(double)arg2 ;
-(FMFWildcardGestureRecognizer *)gr;
-(SCD_Struct_FM4)lastUserLocationCoordinate;
@end
