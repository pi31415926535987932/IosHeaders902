/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class GEORouteMatch;


@protocol VKRouteMatchedAnnotationPresentation <VKTrackableAnnotationPresentation>
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
@required
-(void)removePresentationCoordinateChangedObserver:(id)arg1;
-(void)addPresentationCoordinateChangedObserver:(id)arg1;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(id)arg1;

@end
