/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimerButton : CAMExpandableMenuButton {
    UIImageView *__glyphView;
    <CAMTimerButtonDelegate> *_delegate;
    BOOL _hideOffWhenCollapsed;
}

@property (nonatomic, readonly) UIImageView *_glyphView;
@property (nonatomic) <CAMTimerButtonDelegate> *delegate;
@property (nonatomic) int duration;
@property (nonatomic) BOOL hideOffWhenCollapsed;

- (void).cxx_destruct;
- (void)_commonCAMTimerButtonInitialization;
- (id)_glyphView;
- (id)delegate;
- (int)duration;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (BOOL)hideOffWhenCollapsed;
- (id)initWithExpansionOrientation:(int)arg1;
- (int)numberOfMenuItems;
- (void)setDelegate:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setDuration:(int)arg1 animated:(BOOL)arg2;
- (void)setHideOffWhenCollapsed:(BOOL)arg1;
- (id)titleForMenuItemAtIndex:(int)arg1;

@end