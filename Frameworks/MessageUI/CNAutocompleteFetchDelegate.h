/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:47 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CNAutocompleteFetchDelegate <NSObject>
@optional
-(void)autocompleteFetchDidFinish:(id)arg1;
-(void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
-(void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
-(char)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
-(void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
-(/*^block*/id)resultComparatorForAutocompleteFetch:(id)arg1;

@required
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;

@end

