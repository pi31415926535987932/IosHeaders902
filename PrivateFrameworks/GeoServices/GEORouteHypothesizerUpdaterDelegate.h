/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEORouteHypothesizerUpdaterDelegate <NSObject>
@optional
-(void)routeHypothesizerUpdater:(id)arg1 didChangeTravelState:(char)arg2;
-(void)routeHypothesizerUpdaterDidArrive:(id)arg1;
-(void)routeHypothesizerUpdater:(id)arg1 faultedWithError:(id)arg2;

@required
-(void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
-(void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;

@end

