/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:39 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFReaderContext <NSObject>
@required
-(void)loadNewArticle;
-(void)setReaderFont:(id)arg1;
-(void)setReaderTheme:(id)arg1;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)setReaderUserVisibleWidth:(double)arg1;
-(void)createArticleFinder;
-(id)readerURL;
-(char)isReaderAvailable;
-(char)isLoadingNextPage;
-(void)stopLoadingNextPage;
-(char)hasMultiplePages;
-(void)clearReaderWebView;
-(char)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned)arg1;
-(id)scrollPositionInformation;
-(void)clearAvailability;
-(void)clearUnusedReaderResourcesSoon;
-(id)fontManager;
-(void)setReaderLanguageTag:(id)arg1;
-(id)configuration;

@end

